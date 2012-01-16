$LOAD_PATH << "."
$profiling=false
$OPT=" -march=core2"
$debug=1
$compile_1_8_7=false
$compile_1_9_3=true

require '../amethyst/lib/amethyst'
require './lib/ast'
require './lib/utils'
["peridot","translator"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "./compiled/#{f}"
}


p= Peridot_parser.new.parse(:root,File.new("peridot/prologue.per").read)
puts p.inspect
File.open("test.c","w"){|f|
 f.puts "#include <stdio.h>
         typedef struct{int class;int in; } obj;
         typedef obj (* obj_fn)();
         obj Int(int i){obj o;o.class=0;o.in=i;return o;}"
 f.puts Peridot_translator.new.parse(:root,p) 
}
puts `gcc test.c`
puts `./a.out`
