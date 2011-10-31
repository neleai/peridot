class Peridot_parser < Amethyst

def atom_Peridot_parsercb_1(bind)
CCode[bind[0]*""]
end
def atom_Peridot_parsercb_2(bind)
_append(bind[1],bind[5])
end
def atom_Peridot_parsercb_3(bind)
Call.create( {:ary=>bind[1],:name=>bind[4] })
end
def atom_Peridot_parsercb_4(bind)
(bind[4]!="end") || FAIL
end
def atom_Peridot_parsercb_5(bind)
Var[{:name=>bind[4]}]
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
def sequence_Peridot_parsercb_1(bind)
_append(bind[0],bind[1])
end
def sequence_Peridot_parsercb_2(bind)
_append(bind[0],bind[2])
end
def sequence_Peridot_parsercb_3(bind)
Seq.create( {:ary=>bind[0] })
end

end


def peridot_compiled_by
'b8cd7f2b463428f7d287ec8a4dd97bb4'
end
def peridot_source_hash
'bdb38ba3794c3d4419727b345c15e359'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'59217f34f40ec3a82aa7350a4530d8a6'
end
  require 'compiled/peridot_c'
