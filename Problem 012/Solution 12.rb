# Solves http://projecteuler.net/problem=12

number = 0
check = 0
counter = 1
divisors = 0

while (divisors <= 250)
	puts number
	number += counter
	check = 1
	divisors = 0

	for check in (1..Math.sqrt(number))
		divisors += 1 if (number % check == 0)
	end

	counter += 1
end

print "Answer: ", number, "\r\n"
