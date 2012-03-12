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
def _CCode__lb2(bind)
CCode["Str(#{bind[1].inspect})"]

end
def _CCode__lbbi_c1c3(bind)
CCode[bind[1]*""]
end
def _Call__lb(bind)
Call[{:name=>leterize(bind[1]) ,:ary=>["self",bind[2]]}]

end
def _Call__lb2(bind)
Call[{:name=>leterize(bind[1]) ,:ary=>["self"]}]

end
def _Call__lb3(bind)
Call[{:name=>leterize("[]="),:ary=>[bind[1],bind[2],bind[3]]}]

end
def _Call__lb4(bind)
Call[{:name=>leterize("[]") ,:ary=>[bind[1],bind[2]]}]

end
def _Call__lb5(bind)
Call[{:name=>leterize(bind[1]) ,:ary=>[bind[2],bind[3]]}]

end
def _Call__lb6(bind)
Call[{:name=>leterize(bind[1]) ,:ary=>[bind[2]]}]

end
def _Call__lb7(bind)
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
Var.create( {:name=>bind[1] })
end
def ___lb(bind)
["obj self"]
end
def _bind__lb1__rb__assign_0627(bind)
bind[1]=bind[1]+[','] if bind[1].size==1
end
def _bind__lb1__rb__plus_947c(bind)
bind[1]+bind[2]*""
end
def _leterize_5878(bind)
leterize(bind[1]*"")
end

end

def peridot_compiled_by
'df338f494311d9fef4d66c14b8d23514'
end
def peridot_source_hash
'f6ffe43df1f8247387f871951cea388c'
end
def testversionperidot(r)
 raise "invalid version" if r!=peridot_version
end
def peridot_version
'af479a47739fd493ce79f865c1c865a3'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/peridot_c"
