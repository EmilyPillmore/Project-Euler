/* Solves http://projecteuler.net/problem=10 */

#include <stdio.h>

int Prime(int number)
{
        /* 1 and 2 are prime, but we don't care.*/
        int x = 3;
        while(x < number)
        {
                /* The number isn't prime */
                if(number % x == 0) return 0;
		/* We only check odd numbers */
                x += 2;
        }
        return 1;
}

int main()
{
	/* We start off with a sum of 2 because 2 is a prime and we only check odd numbers. */
	double sum = 2.0;
	int number = 3;

	/* Loop for every odd number under 2 milion */
	for (number = 3; number < 2000000; number += 2)
	{
		if(Prime(number))
		{
			sum += number;
			printf("Sum: %f\r\n", sum);
		}
	}

	printf("Answer: %f\r\n", sum);

}
