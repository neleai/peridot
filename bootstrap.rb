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
				 #include <stdlib.h>
				 typedef struct {int class;} _obj;
				 typedef _obj* obj;
         typedef struct {int class;int in;} obj_fixint;
         typedef struct {int class;obj *ary;} obj_array;

         typedef obj (* obj_fn)();
         obj Int(int i){obj_fixint *o=malloc(sizeof(obj_fixint));  o->class=0;o->in=i;return o;}
				 int obj2int(obj o){return ((obj_fixint*)o)->in;}
				 obj geti(){int i;scanf(\"%i\",&i);return Int(i);}
         obj Array(){obj_array *o=malloc(sizeof(obj_array));o->class=1;o->ary=(obj *) malloc(100);return o;}
				 obj* obj2ary(obj o){return ((obj_array*)o)->ary;}
"

			
 f.puts Peridot_translator.new.parse(:root,p) 
}
puts `gcc test.c`
puts `./a.out`
