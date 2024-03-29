/* Solves http://projecteuler.net/problem=14 */

#include <stdio.h>

/* Do the even or odd stuff. */
size_t Even(size_t number)
{
	return number/2;
}

size_t Odd(size_t number)
{
	return 3*number+1;
}

int main()
{
	/* Our variables. */
	size_t check;
	int l_number = 0;
	int l_counter = 0;
	int counter, i;

	/* We only check odd numbers because any even number will have a shorter
		chain since it's just being divided by two all the way down to 1. */
	for(i = 1; i <= 1000000; i+=2)
	{
		for(check = i, counter = 0; check != 1; ++counter)
			check = (check % 2 == 0) ? Even(check) : Odd(check);

		if (l_counter < counter)
		{
			l_number = i;
			l_counter = counter;
		}

	}

	printf("Answer: %d\r\n", l_number);

	return 0;
}
