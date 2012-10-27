# Solves http://projecteuler.net/problem=1

my $sum = 0;
$sum += $_ for grep { (($_ % 3 == 0) || ($_ % 5 == 0)) } (1..1000);
print $sum;
