# Solves http://projecteuler.net/problem=9

if __FILE__ == $0

	for a in (1..1000)
		for b in (1..1000)
			for c in (1..1000)
				if((a+b+c == 1000) && (a*a + b*b == c*c))
					product = a*b*c
					break
				end
			end
		end
	end

	print "Answer: ", product, "\n"

end
