class Peridot_parser < Amethyst

def atom_Peridot_parsercb_1(bind)
If[{:expr=>bind[4],:block=>bind[5]}]
end
def atom_Peridot_parsercb_2(bind)
_append(bind[0],bind[6])
end
def atom_Peridot_parsercb_3(bind)
CCode[bind[0]*""]
end
def atom_Peridot_parsercb_4(bind)
_append(bind[1],bind[8])
end
def atom_Peridot_parsercb_5(bind)
Call.create( {:ary=>bind[1],:name=>bind[7] })
end
def atom_Peridot_parsercb_6(bind)
(bind[7]!="end") || FAIL
end
def atom_Peridot_parsercb_7(bind)
Var.create( {:ary=>bind[1],:name=>bind[7] })
end
def defi_Peridot_parsercb_1(bind)
_append(bind[0],bind[3])
end
def defi_Peridot_parsercb_2(bind)
_append(bind[1],bind[4])
end
def defi_Peridot_parsercb_3(bind)
Def.create( {:args=>bind[0],:ary=>bind[1],:name=>bind[2] })
end
def expr_Peridot_parsercb_1(bind)
Call[{:name=>leterize(bind[1]),:ary=>[bind[0],bind[2]]}]
end
def name_Peridot_parsercb_1(bind)
_append(bind[1],bind[2])
end
def name_Peridot_parsercb_2(bind)
bind[0]+bind[3]*""
end
def root_Peridot_parsercb_1(bind)
_append(bind[0],bind[1])
end
def sequence_Peridot_parsercb_1(bind)
_append(bind[0],bind[2])
end
def sequence_Peridot_parsercb_2(bind)
Seq.create( {:ary=>bind[0] })
end

end


def peridot_compiled_by
'68f1ee9e61385fab0ca401b476c6da05'
end
def peridot_source_hash
'dc2b2e6e2cb41d120a96bfddca768fdb'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'9a482940b95dbd2f88558360f3aad6c3'
end
  require 'compiled/peridot_c'
