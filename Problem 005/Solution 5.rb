# Solves http://projecteuler.net/problem=5

x = 0
check = 0

while check != 20
	check = 0
	# We only check multiples of 10 because it has
	# to end in 0 to be divisible by 10 or 20
	x += 10

	# Loop to check if it's divisible by 1-20
	for y in (1..20)
		check += 1 if(x % y == 0)
	end

end

print "Answer: ", x, "\n"
