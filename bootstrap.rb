$LOAD_PATH << "."

require '../amethyst/lib/amethyst'
require './lib/ast'
require './lib/utils'
["peridot","translator"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "./compiled/#{f}"
}


puts `gcc -g  -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -fpic load.c -c -o load.o`
puts `gcc -g -shared -o Load.so load.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc`
require 'Load'

def Object.peridot_eval(s,file="test_eval")
  $translated=[]
  p= Peridot_parser.new.parse(:root,s)
  puts p.inspect
  t=Peridot_translator.new.parse(:root,p)
  File.open("#{file}.c","w"){|f|
    f.puts "#include \"prolog.h\""
    f.puts t
  }
  puts `gcc -g #{file}.c -shared -fPIC -o #{file}.so`
  Object.peridot_library("./#{file}.so")
  $translated.each{|cl,me,name|
  Object.peridot_method(cl,me,name)
  }
end


$methods=[]
$translated=[]
$classes=[]
Object.peridot_eval(File.new("peridot/prologue.per").read,"test")
load_test
