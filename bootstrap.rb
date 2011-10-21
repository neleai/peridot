require '../amethyst/lib/amethyst'
require 'lib/ast'
["peridot","translator"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "compiled/#{f}"
}


puts Peridot_parser.new.parse(:root,"2+2")
puts Peridot_translator.new.parse(:root,[Func[{:name=>"plus",:ary=>[Var[{:name=>"a"}],Var[{:name=>"b"}]]}]])
