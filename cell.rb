$LOAD_PATH << "."

require '../amethyst/lib/amethyst'

["cell"].each{|f|
Compiler::compile("amethyst/#{f}.ame")

require Amethyst_path+"/compiled/#{f}"
}

