class Peridot_parser < Amethyst

def expr_Peridot_parsercb_1(bind)
Func[{:name=>"plus",:ary=>[bind[0],bind[1]]}]
end

end


def peridot_compiled_by
'32e1bf03e0f843f0f8290a1271d8023d'
end
def peridot_source_hash
'e393de77b7a17d77ab222b50749d880a'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'cfb697db0d9e18eab06f1ac8c69afc26'
end
  require 'compiled/peridot_c'
