# Solves http://projecteuler.net/problem=7

def CheckPrime(number)

	# We start at 3 because 1 and 2 are prime, and we don't
	# check them
	x = 3
	limit = number

	while x < limit
		return 0 if (number % x == 0)

		limit = number / x
		x += 2
	end

	return 1
end

x = 1
pc = 3

while(1)
	x += 1 if(CheckPrime(pc) == 1)
	break if x == 10001
	pc += 2
end

print "Answer: ", pc, "\n"
