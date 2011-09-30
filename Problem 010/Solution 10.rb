# Solves http://projecteuler.net/problem=10

def CheckPrime(number)

	return 0 if (number % 2 == 0)

	x = 3
	limit = number
	while x < limit
		return 0 if (number % x == 0)

		limit = number / x
		x += 2
	end

	return 1 
end


sum = 2
number = 3

for number in (3..2000000)
	sum += number if (CheckPrime(number) == 1)
end

print "Answer: ", sum, "\n"
