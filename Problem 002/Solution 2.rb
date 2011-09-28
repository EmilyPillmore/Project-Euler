# Solves http://projecteuler.net/problem=2

if __FILE__ == $0

	sum = 0
	x = 1
	y = 1
	last = 1

	while x <= 4000000
		if (x % 2 == 0)
			sum += x
		end

		last = x
		x += y
		y = last
	end

	print "Answer: ", sum, "\n"
end
