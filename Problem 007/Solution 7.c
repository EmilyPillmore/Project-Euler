/* Solves http://projecteuler.net/problem=7 */
#include <stdio.h>
#include "../includes/C/Prime.h"

int main()
{
	/* Set vars */
	int primecount, number;

	/* Loop until we break */
	for(primecount = 0, number = 1; primecount != 10001; number += 2)
	{
		/* If we find a prime, incrase x
			if x is 10001, break the loop */
		if(IsPrime(number) == 1)
			++primecount;

		/* If primecount is 10001 then break the loop. */
		if(primecount == 10001)
			break;

	}

	/* Print the answer */
	printf("Answer: %d\r\n", number);

	return 0;
}
