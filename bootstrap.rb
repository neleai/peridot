require '../amethyst/lib/amethyst'
require 'lib/ast'
["peridot","translator"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "compiled/#{f}"
}


p= Peridot_parser.new.parse(:root,"2+2+a")
puts p.inspect
puts Peridot_translator.new.parse(:root,[p])
