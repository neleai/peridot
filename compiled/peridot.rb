class Peridot_parser < Amethyst

def Peridot_parser_(bind)
'{'+bind[7][0]+'}'
end
def Peridot_parser_Assign(bind)
Assign.create( {:expr=>bind[1],:name=>bind[0] })
end
def Peridot_parser_CCode__lb(bind)
CCode["Int(#{bind[2]})"]

end
def Peridot_parser_CCode__lbbi_55b5(bind)
CCode[bind[0]*""]
end
def Peridot_parser_Call(bind)
Call.create( {:ary=>bind[1],:name=>bind[10] })
end
def Peridot_parser_Call__lb(bind)
Call[{:name=>leterize("[]="),:ary=>[bind[0],bind[2],bind[3]]}]

end
def Peridot_parser_Call__lb2(bind)
Call[{:name=>leterize("[]") ,:ary=>[bind[0],bind[2]]}]

end
def Peridot_parser_Call__lb3(bind)
Call[{:name=>leterize(bind[1]),:ary=>[bind[0],bind[2]]}]
end
def Peridot_parser_Def(bind)
Def.create( {:args=>bind[0],:ary=>bind[1],:name=>bind[2] })
end
def Peridot_parser_If__lb(bind)
If[{:expr=>bind[5],:block=>bind[6]}]
end
def Peridot_parser_Klass(bind)
Klass.create( {:ary=>bind[3],:name=>bind[0] })
end
def Peridot_parser_Seq(bind)
Seq.create( {:ary=>bind[0] })
end
def Peridot_parser_Var(bind)
Var.create( {:ary=>bind[1],:name=>bind[10] })
end
def Peridot_parser___append(bind)
_append(bind[0],bind[1])
end
def Peridot_parser___append2(bind)
_append(bind[1],bind[2])
end
def Peridot_parser___append3(bind)
_append(bind[0],bind[3])
end
def Peridot_parser___append4(bind)
_append(bind[1],bind[4])
end
def Peridot_parser___append5(bind)
_append(bind[0],bind[8])
end
def Peridot_parser___append6(bind)
_append(bind[0],bind[9])
end
def Peridot_parser___append7(bind)
_append(bind[1],bind[11])
end
def Peridot_parser___append8(bind)
_append(bind[0],bind[2])
end
def Peridot_parser___divide__lb(bind)
/[^ \t\r\n()]/
end
def Peridot_parser___divide__lba__minuszA__minusZ_4f92(bind)
/[a-zA-Z0-9_]/
end
def Peridot_parser___divide__lba__minuszA__minusZ_6114(bind)
/[a-zA-Z_]/
end
def Peridot_parser_bind__lb0__rb__plus_4fd1(bind)
bind[0]+bind[3]*""
end
def Peridot_parser_leterize_92ea(bind)
leterize(bind[2]*"")
end
def Peridot_parser_leterize_fe70(bind)
leterize(bind[7])
end

end


def peridot_compiled_by
'a9ea4d17b41039dd30ac4cedaad0ee5b'
end
def peridot_source_hash
'a5563f8b237305cc46cd93c053217ca4'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'87ece2ec8e8ffa453e9de1445257fe61'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/peridot_c"
