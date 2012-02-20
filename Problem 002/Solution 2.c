/* Solves http://projecteuler.net/problem=2 */

#include <stdio.h>

int main()
{
	/* Define the variables */
	int x = 1, y = 1, sum = 0, last;

	/* Check every number under 4 milion */
	while (x <= 4000000)
	{

		/* If the checking number is even, add it to the sum */
		if (x % 2 == 0)
			sum += x;

		/* Set last to x, x to x+y, y to last. */
		last = x;
		x += y;
		y = last;
	}

	/* Print the answer */
	printf("Answer: %d\r\n", sum);

	return 0;
}
