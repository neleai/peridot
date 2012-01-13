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
def Peridot_parser_Method(bind)
Method["[]",bind[0],bind[1]]

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
def Peridot_parser__divide(bind)
/[a-zA-Z_]/
end
def Peridot_parser__divide2(bind)
/[a-zA-Z0-9_]/
end
def Peridot_parser__divide3(bind)
/[^ \t\r\n()]/
end
def Peridot_parser_bind(bind)
bind[0]+bind[3]*""
end
def Peridot_parser_leterize_92ea(bind)
leterize(bind[2]*"")
end

end


def peridot_compiled_by
'49423aced524e15ddb60e70ea1141f77'
end
def peridot_source_hash
'd8e9f0e02d0d5c592274cf1b9372e575'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'6bb441beaca253a91828f96dca236829'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/peridot_c"
