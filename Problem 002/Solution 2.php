<?php
/* Solves http://projecteuler.net/problem=2 */
$sum = 0;
$x = 1;
$y = 1;

while($x <= 4000000)
{
	if($x % 2 == 0)
	{
		$sum += $x;
	}

	$last = $x;
	$x += $y;
	$y = $last;
}

print("Answer: " . $sum . "\r\n");
?>
