# Solves http://projecteuler.net/problem=3

number = 600851475143
i = 2

# This loops while i and the number are different
while i != number
	number /= i if(number % i == 0)

	i += 1
end

print "Answer: ", number, "\n"
