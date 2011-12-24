# Declare function
def IsPrime(number)
	# 1 and 2 are both prime
	return 1 if(number < 3 && number > 0)

	# Any even number other than 2 is not prime
	return 0 if(number % 2 == 0)

	# Declare variables
	x = 3
	limit = number;

	# Loop while x < limit
	while x < limit
		# If this hits the number isn't prime
		return 0 if(number % x == 0)

		# Change the limit
		limit = number / x

		# Increase x
		x += 2
	end

	# Number is prime
	return 1;
end
