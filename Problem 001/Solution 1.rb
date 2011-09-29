# Solves http://projecteuler.net/problem=1

if __FILE__ == $0
	sum = 0
	for counter in (1..999)
		if ((counter % 3 == 0) || (counter % 5 == 0))
			sum += counter
		end
	end

	 print "Answer: ", sum, "\n"
end
