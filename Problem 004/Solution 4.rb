# Solves http://projecteuler.net/problem=58

(999.downto 100).each do |a|
	(999.downto 100).each do |b|
		sum = a*b
		if sum.to_s == sum.to_s.reverse
			largestp = sum if sum > largestp
		end
	end
end

print "Answer: ", largestp, "\n"
