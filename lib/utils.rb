def leterize(s)
	h={"+"=>"_plus","-"=>"_minus","*"=>"_times","/"=>"_divide"}
	h.each{|k,v| s=s.gsub(k,v)}
	s
end
