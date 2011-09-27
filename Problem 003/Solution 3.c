/* Solves http://projecteuler.net/problem=3 */

#include <stdio.h>

int main()
{
	size_t number = 600851475143;
	int i = 2;

	/* This loops until i is the same as the number */
	for(i = 2; i != number; i++)
	{
		/* If the number is divisible by i, do the math
		otherwise continue looping */
		if(number % i == 0)
			number /= i;
	}

	/* Print the last number. */
	printf("Answer: %d\r\n", number);
	return 0;
}
