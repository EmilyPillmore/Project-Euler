# Solves http://projecteuler.net/problem=6

if __FILE__ == $0

	sum = 0
	sq_sum = 0

	for n in (1..100)
		sum += n*n
		sq_sum += n
	end

	sq_sum *= sq_sum

	print "Answer: ", sq_sum-sum, "\n"
end
