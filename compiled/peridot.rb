class Peridot_parser < Amethyst

def atom_Peridot_parsercb_1(bind)
Var[{:name=>bind[1]}]
end
def expr_Peridot_parsercb_1(bind)
Func[{:name=>"plus",:ary=>[bind[0],bind[1]]}]
end
def name_Peridot_parsercb_1(bind)
_append(bind[1],bind[2])
end
def name_Peridot_parsercb_2(bind)
bind[0]+bind[3]*""
end

end


def peridot_compiled_by
'32e1bf03e0f843f0f8290a1271d8023d'
end
def peridot_source_hash
'14cfe4b131c98d8b3b57eb4d2de8a0ae'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'c7952d3f3e905e14e659369431078ab5'
end
  require 'compiled/peridot_c'
