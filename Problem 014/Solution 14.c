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
	int l_number = 0;
	size_t check;
	int l_counter = 0;
	int counter;
	int i;

	/* We only check odd numbers because any even number will have a shorter
		chain since it's just being divided by two all the way down to 1. */
	for(i = 1; i <= 1000000; i+=2)
	{
		check = i;
		counter = 0;
		while (check != 1)
		{
			if (check % 2 == 0)
				check = Even(check);
			else
				check = Odd(check);

			++counter;

		}

		if (l_counter < counter)
		{
			l_number = i;
			l_counter = counter;
		}

	}

	printf("Answer: %d\r\n", l_number);

	return 0;
}
