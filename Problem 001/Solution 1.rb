# Solves http://projecteuler.net/problem=1

sum = 0

for counter in (1...1000)
	sum += counter if((counter%3 == 0) || (counter%5==0))
end

print "Answer: ", sum, "\n"
