# Solves http://projecteuler.net/problem=10

def CheckPrime(number)

	if (number % 2 == 0)
		return 0
	end
	x = 3
	limit = number
	while x < limit
		if (number % x == 0)
			return 0
		end

		limit = number / x
		x += 2
	end
	return 1 
end


if __FILE__ == $0

	sum = 2
	number = 3

	for number in (3..2000000)
		if(CheckPrime(number) == 1)
			sum += number
		end
	end

	print "Answer: ", sum, "\n"
end
