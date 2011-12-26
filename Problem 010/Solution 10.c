/* Solves http://projecteuler.net/problem=10 */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/C/Prime.h"

int main()
{
	/* We start off with a sum of 2 because 2 is a prime
		and we only check odd numbers. */
	double sum = 2;
	int number;

	/* Loop for every odd number under 2 milion */
	for (number = 3; number < 2000000; number += 2)
		if(IsPrime(number))
			sum += number;

	printf("Answer: %.0f\r\n", sum);

	return 0;
}
