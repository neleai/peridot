require '../amethyst/lib/amethyst'
require 'lib/ast'
require 'lib/utils'
["peridot","translator"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "compiled/#{f}"
}


p= Peridot_parser.new.parse(:root,File.new("peridot/prologue.per").read)
puts p.inspect
File.open("test.c","w"){|f|	f.puts Peridot_translator.new.parse(:root,p) }
`gcc test.c`
