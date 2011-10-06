# Solves http://projecteuler.net/problem=20

import operator

# one liner, yo
result = sum([int(i) for i in str(reduce(operator.mul, range(1, 101)))])

print 'Answer: %d' % result
