class Peridot_parser < Amethyst

def Peridot_parser_(bind)
(bind[9]!="end") || FAIL
end
def Peridot_parser_Assign(bind)
Assign.create( {:expr=>bind[1],:name=>bind[0] })
end
def Peridot_parser_CCode(bind)
CCode[bind[0]*""]
end
def Peridot_parser_Call(bind)
Call.create( {:ary=>bind[1],:name=>bind[9] })
end
def Peridot_parser_Call2(bind)
Call[{:name=>leterize(bind[1]),:ary=>[bind[0],bind[2]]}]
end
def Peridot_parser_Def(bind)
Def.create( {:args=>bind[0],:ary=>bind[1],:name=>bind[2] })
end
def Peridot_parser_If(bind)
If[{:expr=>bind[4],:block=>bind[5]}]
end
def Peridot_parser_Seq(bind)
Seq.create( {:ary=>bind[0] })
end
def Peridot_parser_Var(bind)
Var.create( {:ary=>bind[1],:name=>bind[9] })
end
def Peridot_parser__append(bind)
_append(bind[0],bind[1])
end
def Peridot_parser__append2(bind)
_append(bind[0],bind[3])
end
def Peridot_parser__append3(bind)
_append(bind[1],bind[4])
end
def Peridot_parser__append4(bind)
_append(bind[1],bind[2])
end
def Peridot_parser__append5(bind)
_append(bind[0],bind[6])
end
def Peridot_parser__append6(bind)
_append(bind[1],bind[10])
end
def Peridot_parser__append7(bind)
_append(bind[0],bind[2])
end
def Peridot_parser_bind(bind)
bind[0]+bind[3]*""
end

end


def peridot_compiled_by
'49423aced524e15ddb60e70ea1141f77'
end
def peridot_source_hash
'397e43d70506a98fb0e132f53ce7e821'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'604dccf4a24f0d3543c5805b981d64b5'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/peridot_c"
