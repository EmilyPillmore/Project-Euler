# Solves http://projecteuler.net/problem=15

square = Array.new(21) { Array.new(21, 0) }

square[0][0] = 1

for a in (0..20)
	for b in (0..20)
		square[a][b] += square[a-1][b] if a > 0
		square[a][b] += square[a][b-1] if b > 0
	end
end

print "Answer: ", square[a][b], "\n"
