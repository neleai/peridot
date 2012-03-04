class Gadget_Inner
  attr_accessor :inputs,:outputs,:links
end
class Gadget_Outer
  attr_accessor :inputs,:outputs,:inner
  def initialize (innr)
    @inner=innr
    @inputs  = @inner.inputs.clone
    @outputs = @inner.outputs.clone
  end
end
class Chi
  attr_accessor :label,:inedges,:outedges,:cell
  def initialize(label,cell)
    @cell=cell
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

plus=Gadget_Inner.new
plus.inputs=[Chi.new("x",plus),Chi.new("y",plus)]
plus.outputs=[Chi.new("result",plus)]

times=Gadget_Inner.new
times.inputs=[Chi.new("x",times),Chi.new("y",times)]
times.outputs=[Chi.new("result",times)]

function= Gadget_Inner.new 
function.outputs=[Chi.new("a",function),Chi.new("b",function)]
function.inputs=[Chi.new("c",function),Chi.new("d",function)]

plus1=Gadget_Outer.new(plus)
plus2=Gadget_Outer.new(plus)
times1=Gadget_Outer.new(times)

Link.new(function,function.outputs[0],plus1.inputs[0])
Link.new(function,function.outputs[1],plus1.inputs[1])
Link.new(function,plus1.outputs[0],times1.inputs[0])
Link.new(function,plus1.outputs[0],times1.inputs[1])
Link.new(function,times1.outputs[0],function.inputs[0])


def traverse(f)
  ary=[f]
  i=0
  while i<ary.size
    elem=ary[i];    i+=1;
    puts elem.inspect
    elem.outputs.each{|e| 
      puts e.outlinks(f).inspect
      e.outlinks(f).each{|el|
        ary << el.to.cell unless ary.include?(el.to.cell)  
      }
    }
  end
end
traverse(function)
