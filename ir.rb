class Gadget_Inner
  attr_accessor :inputs,:outputs,:links
end
class Gadget_Outer
end
class Chi
  attr_accessor :label,:inedges,:outedges
  def initialize(label)
    @label=label
    @inedges=[];@outedges=[]
  end
  def inspect
    "@#{@label}"
  end
  def inlinks(g)
    @inedges
  end
  def outlinks(g)
    @outedges
  end
end
class Link
  attr_accessor :from,:to
  def initialize(gadget,input,output)
    @gadget,@from,@to=gadget,input,output
    @to.inedges   << self
    @from.outedges<< self
  end
  def inspect
    "(#{from.inspect} -> #{to.inspect})"
  end
end

plus=Gadget.new
plus.inputs=[Chi.new("x"),Chi.new("y")]
plus.outputs=[Chi.new("result")]

times=Gadget.new
times.inputs=[Chi.new("x"),Chi.new("y")]
times.outputs=[Chi.new("result")]

function= Gadget.new 
function.inputs=[Chi.new("a"),Chi.new("b")]
function.outputs=[Chi.new("c"),Chi.new("d")]

Link.new(function,function.inputs[0],plus.inputs[0])
Link.new(function,function.inputs[1],plus.inputs[1])
Link.new(function,plus.outputs[0],times.inputs[0])
Link.new(function,plus.outputs[0],times.inputs[1])
Link.new(function,times.outputs[0],function.outputs[0])


puts function.inspect
def traverse(f)
  f.inputs.each{|e| puts e.outlinks(f).inspect}
end
traverse(function)
