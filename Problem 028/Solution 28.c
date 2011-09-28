/* Solves http://projecteuler.net/problem=28 */

#include <stdio.h>

int main()
{
	int i = 3;
	int Corner[4];
	int sum = 0;
	int a = 0;

	for(i = 3; i <= 1001; i += 2)
	{
		a = 0;

		/* This calculates each corner as we go down the grid */
		Corner[3] = i*i;
		Corner[2] = Corner[3] - (i-1);
		Corner[1] = Corner[2] - (i-1);
		Corner[0] = Corner[1] - (i-1);

		/* Calculate the sum */
		for(a = 0; a < 4; ++a)
		{
			sum += Corner[a];
		}
	}

	printf("Answer: %d\r\n", sum+1);

	return 0;
}
