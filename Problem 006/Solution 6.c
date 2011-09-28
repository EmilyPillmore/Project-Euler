/* Solves http://projecteuler.net/problem=6 */
#include <stdio.h>

int main()
{
	/* Vars */
	int sum = 0;
	int sq_sum = 0;
	int n = 0;

	/* For every number under and including 100. */
	for(n = 0; n <= 100; n++)
	{
		/* sum is the sum of the squared numbers
		sq_sum is the sum of the numbers to be squared later. */
		sum += n*n;
		sq_sum += n;
	}
	/* Square sq_sum and find the difference. */
	sq_sum = sq_sum*sq_sum;

	/* Print the results. */
	printf("Difference: %d\r\n", sq_sum-sum);
}