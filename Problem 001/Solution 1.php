<?php
/* Solves http://projecteuler.net/problem=1 */
/* Declare variables */
$counter = 1;
$sum = 0;

/* Loop while $counter < 1000 */
while($counter < 1000)
{
	/* Check if divisible by 3 or 5 */
	if($counter % 3 == 0 || $counter % 5 == 0)
		$sum += $counter;

	/* Incrase counter */
	++$counter;
}

/* Print answer */
print("Answer: " . $sum . "\r\n");
?>
