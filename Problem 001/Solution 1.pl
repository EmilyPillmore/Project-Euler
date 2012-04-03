# Solves http://projecteuler.net/problem=1

$sum = 0;

for $n (1..1000) {
	$sum += $n if (($n % 3 == 0) || ($n % 5 == 0));
}

print "Answer: $sum\r\n";
