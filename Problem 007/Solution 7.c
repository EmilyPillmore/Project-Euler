/* Solves http://projecteuler.net/problem=7 */
#include <stdio.h>
#include "../includes/C/Prime.h"

int main()
{
	/* Set vars */
	int primecount = 0;
	int number = 1;

	/* Loop until we break */
	for(primecount = 0, number = 1; primecount != 10001; number += 2)
	{
		printf("Count: %d\r\n", primecount);
		/* If we find a prime, incrase x
			if x is 10001, break the loop */
		if(IsPrime(number) == 1)
			primecount++;

		if(primecount == 10001)
			break;

	}

	/* Print the answer */
	printf("Answer: %d\r\n", number);

	return 0;
}
