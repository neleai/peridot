require '../amethyst/lib/amethyst'

["peridot"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
}
