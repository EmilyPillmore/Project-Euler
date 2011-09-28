# Solves http://projecteuler.net/problem=28

if __FILE__ == $0

	x = 3
	sum = 0
	corner = [ "0", "0", "0", "0" ]

	while x <= 1001
		corner[3] = x*x
		corner[2] = corner[3] - (x-1)
		corner[1] = corner[2] - (x-1)
		corner[0] = corner[1] - (x-1)

		for a in (0..3)
			sum += corner.fetch(a)
		end

		x += 2
	end

	print "Answer: ", sum, "\n"
end
