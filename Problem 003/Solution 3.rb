# Solves http://projecteuler.net/problem=3

if __FILE__ == $0

	number = 600851475143
	i = 2

	# This loops while i and the number are different
	while i != number
		if(number % i == 0)
			number /= i
		end

		i += 1
	end

	print "Answer: ", number, "\n"
end
