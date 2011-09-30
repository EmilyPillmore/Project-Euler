# Solves http://projecteuler.net/problem=16

number = (2**1000).to_s.chars
sum = 0

number.each do |i|
	sum += i.to_i
end

print "Answer: ", sum, "\n"
