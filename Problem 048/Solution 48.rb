# Solves: http://projecteuler.net/problem=48

sum = 0

for i in (1..1000)
	sum += i**i
end

print "Answer: ", sum.to_s[-10,10], "\n"
