/* Solves http://projecteuler.net/problem=357 */
#include <stdio.h>
#include <stdlib.h>
#include "../includes/C/Seive.h"

int main()
{
	/* Creates an array for primes */
	char *table = (char*) malloc(sizeof(char) * 100000000);
	int x, y, b;
	double sum = 0;

	/* This fills the table with the seive */
	SeiveE(table, 100000000);

	/* Loop for every number between 1 and 100m */
	for(x = 1; x <= 100000000; ++x)
	{
		b = 1;
		/* This will return 1 if d+n/d is prime.
			(d+n/d = n+1 */
		if(table[x+1] == 1)
		{
			for(y = 1; y*y <= x; ++y)
				if(x % y == 0)
					if (table[y+x/y] == 0)
					{
						b = 0;
						break;
					}

			if(b == 1)
				sum += x; 

		}
	}

	printf("Answer: %.0f\r\n", sum);

	return 0;
}
