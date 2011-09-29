# Solves http://projecteuler.net/problem=21

def d(num)
	sum = 0
	for n in (1..num-1)
		sum += n if(num % n == 0)
	end

	return sum
end

def checknum(num)
	n1 = d(num)
	n2 = d(n1)

	if num == n2 && n1 != n2
		return num
	else
		return 0
	end
end

sum = 0

for i in (1..10000)
	sum += checknum(i)
end
print "Answer: ", sum, "\n"
