# Solves http://projecteuler.net/problem=20

def bang(num)
	result = num

	while num != 0
		result *= num
		num = num-1
	end

	return result
end

def sum(num)
	sum = 0

	while num != 0
		sum += num % 10
		num /= 10
	end

	return sum
end

nbang = bang(100)
nsum = sum(nbang)

print "Answer: ", nsum, "\n"
