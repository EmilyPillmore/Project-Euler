# Solves http://projecteuler.net/problem=9

for a in (1..1000)
	for b in (1..1000)
		for c in (1..1000)
			if((a+b+c == 1000) && (a*a + b*b == c*c))
				print "Answer: ", a*b*c, "\n"
				exit(0)
			end
		end
	end
end
