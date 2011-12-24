# Solves http://projecteuler.net/problem=7
require '../includes/Ruby/Prime.rb'

primecount = 1
number = 3

while(primecount != 10001)
	primecount += 1 if(IsPrime(number) == 1)
	number += 2 if (primecount != 10001)
end

print "Answer: ", number, "\n"
