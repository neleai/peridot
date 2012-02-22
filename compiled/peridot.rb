class Peridot_parser < Amethyst

def _(bind)
'{'+bind[1][0]+'}'
end
def _Assign(bind)
Assign.create( {:expr=>bind[2],:name=>bind[1] })
end
def _CCode__lb(bind)
CCode["Int(#{bind[1]})"]

end
def _CCode__lbbi_c1c3(bind)
CCode[bind[1]*""]
end
def _Call(bind)
Call.create( {:ary=>bind[2],:name=>bind[1] })
end
def _Call__lb(bind)
Call[{:name=>leterize("[]="),:ary=>[bind[1],bind[2],bind[3]]}]

end
def _Call__lb2(bind)
Call[{:name=>leterize("[]") ,:ary=>[bind[1],bind[2]]}]

end
def _Call__lb3(bind)
Call[{:name=>leterize(bind[1]),:ary=>[bind[2],bind[3]]}]
end
def _Def(bind)
Def.create( {:args=>bind[2],:ary=>bind[3],:name=>bind[1] })
end
def _If__lb(bind)
If[{:expr=>bind[1],:block=>bind[2]}]
end
def _Klass(bind)
Klass.create( {:ary=>bind[2],:name=>bind[1] })
end
def _Seq(bind)
Seq.create( {:ary=>bind[1] })
end
def _Var(bind)
Var.create( {:ary=>bind[2],:name=>bind[1] })
end
def ___append(bind)
_append(bind[1],bind[2])
end
def _bind__lb1__rb__plus_947c(bind)
bind[1]+bind[2]*""
end
def _leterize_5878(bind)
leterize(bind[1]*"")
end
def _leterize_fbae(bind)
leterize(bind[1])
end

end


def peridot_compiled_by
'fbc86debcdabb39e79f0a134753db4ed'
end
def peridot_source_hash
'a5563f8b237305cc46cd93c053217ca4'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'0ab2e27059aecfd3f7de1c6d0e5ff1cb'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/peridot_c"
