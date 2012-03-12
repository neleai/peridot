def leterize(s)
	h={"+"=>"_plus"  ,"/"=>"_divide" ,"%"=>"_mod","["=>"_lb", "="=>"_assign",
     "-"=>"_minus" ,"*"=>"_times"  ,"]"=>"_rb", "_"=>"__"}
	h.each{|k,v| s=s.gsub(k,v)}
	s
end
