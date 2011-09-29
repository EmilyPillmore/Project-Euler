# Solves http://projecteuler.net/problem=14

def Even(number)
	return number/2
end

def Odd(number)
	return 3*number+1
end


l_number = 0
l_counter = 0

for i in (1..1000000)
	check = i
	counter = 0

	while check != 1
		if (check % 2 == 0)
			check = Even(check)
		else
			check = Odd(check)
		end

		counter += 1
	end

	if (l_counter < counter)
		l_number = i
		l_counter = counter
	end
end

print "Answer: ", l_number, "\n"
