# Solves http://projecteuler.net/problem=28

sum = 0
corner = [ "0", "0", "0", "0" ]

for x in (3..1001).step(2)
	corner[3] = x*x
	corner[2] = corner[3] - (x-1)
	corner[1] = corner[2] - (x-1)
	corner[0] = corner[1] - (x-1)

	for a in (0..3)
		sum += corner.fetch(a)
	end
end

print "Answer: ", sum, "\n"
