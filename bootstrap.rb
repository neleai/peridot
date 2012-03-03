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


puts `gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -fpic load.c -c -o load.o`
puts `gcc -shared -o Load.so load.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc`
require 'Load'

def Object.peridot_eval(s)
  $translated=[]
  p= Peridot_parser.new.parse(:root,s)
  puts p.inspect
  t=Peridot_translator.new.parse(:root,p)
  file="test_eval"
  File.open("#{file}.c","w"){|f|
    f.puts "#include \"prolog.h\""
    f.puts t
  }
  puts `gcc #{file}.c -shared -fPIC -o #{file}.so`
  Object.peridot_library("#{file}.so")
  $translated.each{|cl,me,name|
  puts cl
  puts me
  puts name
#  Object.peridot_method(cl,me,name)
  }
end

p= Peridot_parser.new.parse(:root,File.new("peridot/prologue.per").read)
puts p.inspect

$methods=[]
$translated=[]
File.open("test.c","w"){|f|
 f.puts "#include \"prolog.h\""
 f.puts Peridot_translator.new.parse(:root,p) 
}
puts `gcc test.c -shared -fPIC -o test.so`
load_test
