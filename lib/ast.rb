makeclasses(AmethystAST,[:Call,:name],[:Def,:name,:args],[:Var,:name],[:CCode],[:If,:expr,:block],[:Assign,:name,:expr],[:Klass,:name],[:Lambda],[:Yield],[:Iterate])

class Call;          def inspect;  "#{name}(#{ary[0..-1].map{|a|a.inspect}*","})";             end;end
