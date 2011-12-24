# Solves http://projecteuler.net/problem=10
require '../includes/Ruby/Prime.rb'

sum = 2
number = 3

for number in (3..2000000)
	sum += number if (IsPrime(number) == 1)
end

print "Answer: ", sum, "\n"
