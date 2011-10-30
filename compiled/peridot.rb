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
Call[{:name=>"plus",:ary=>[bind[0],bind[1]]}]
end
def mulexpr_Peridot_parsercb_1(bind)
Call[{:name=>"times",:ary=>[bind[0],bind[1]]}]
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

end


def peridot_compiled_by
'32e1bf03e0f843f0f8290a1271d8023d'
end
def peridot_source_hash
'432612250798d90697a0734539d75ccc'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'4008f0a4f2f348e1467260beac2b4b6f'
end
  require 'compiled/peridot_c'
