# Solves http://projecteuler.net/problem=2

sum = 0
x = 1
y = 1

while x <= 4000000
	sum += x if (x % 2 == 0)

	last = x
	x += y
	y = last
end

print "Answer: ", sum, "\n"
