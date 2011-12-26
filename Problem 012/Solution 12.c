/* Solves http://projecteuler.net/problem=12
 * Requires -lm linker flags on some compilers.
 * gcc Solution\ 12.c -lm */

#include <stdio.h>
#include <math.h>

int main()
{
	/* vars */
	int number = 0;
	int check;
	int counter = 1;
	int divisors;

	/* Loop while divisors is under 500 */
	while(divisors <= 250)
	{
		number += counter;
		check = 1;
		divisors = 0;

		/* Check every number under number/2 */
		for(check = 1; check <= sqrt(number); ++check)
			if(number % check == 0)
				++divisors;

		++counter;

	}

	printf("Answer: %d\r\n", number);

	return 0;
}
