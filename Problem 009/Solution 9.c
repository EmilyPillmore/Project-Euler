/* Solves http://projecteuler.net/problem=9 */

#include <stdio.h>

int main()
{
	int a, b, c = 1;
	int product = 1;

	/* Giant for nest to check every possible combination */
	for(a = 1; a <= 1000; a++)
	{
		for(b = 1; b <= 1000; b++)
		{
			for(c = 1; c <= 1000; c++)
			{
				/*Check if a+b+c is 1000, if it is check if aquared + bsquared = csquared. If it does fuckyeah we win. */
				if(a+b+c == 1000)
				{
					if(a*a + b*b == c*c)
					{
						product = a*b*c;
					}
				}
			}
		}
	}
	printf("Product: %d\r\n", product);
}
