/* Solves http://projecteuler.net/problem=10 */

#include <stdio.h>

int Prime(int number)
{
        /* 1 and 2 are prime, but we don't care.*/
        int x = 3;
	int limit = number;

        while(x < limit)
        {
                /* The number isn't prime */
                if(number % x == 0) return 0;
		/* We only check odd numbers */
                limit = number / x;
		x += 2;
        }

        return 1;
}

int main()
{
	/* We start off with a sum of 2 because 2 is a prime and we only check odd numbers. */
	double sum = 2;
	int number = 3;

	/* Loop for every odd number under 2 milion */
	for (number = 3; number < 2000000; number += 2)
	{
		if(Prime(number)) sum += number;
	}

	printf("Answer: %.0f\r\n", sum);

	return 0;
}
