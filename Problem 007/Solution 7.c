/* Solves http://projecteuler.net/problem=7 */
#include <stdio.h>
#include "../includes/C/Prime.h"

int main()
{
	/* Set vars */
	int x = 1;
	int pc = 3;

	/* Loop until we break */
	while(x != 10001)
	{
		/* If we find a prime, incrase x, if x is 10001, break the loop */
		if(IsPrime(pc) == 1) x++;
		pc += 2;
	}

	/* Print the answer */
	printf("Answer: %d\r\n",pc);

	return 0;
}
