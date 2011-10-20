require '../amethyst/lib/amethyst'

["peridot"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}

require 'compiled/peridot'

puts Peridot_parser.new.parse(:root,"2+2")
