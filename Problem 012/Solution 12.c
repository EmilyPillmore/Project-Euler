/* Solves http://projecteuler.net/problem=12
 * Requires -lm linker flags on some compilers.
 * gcc Solution\ 12.c -lm */

#include <stdio.h>
#include <math.h>

int main()
{
	/* vars */
	int number = 0;
	int check = 0;
	int counter = 1;
	int divisors = 0;

	/* Loop while divisors is under 500 */
	while(divisors <= 250)
	{
		printf("Checking: %d\r\n", number);
		number += counter;
		check = 1;
		divisors = 0;

		/* Check every number under number/2 */
//		for(check = 1; check <= number/2; check++)
		for(check = 1; check <= sqrt(number); check++)
		{
			if(number % check == 0) divisors++;
		}

		counter++;

	}

	printf("Answer: %d\r\n", number);

	return 0;
}
