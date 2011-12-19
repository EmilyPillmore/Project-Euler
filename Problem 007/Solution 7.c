/* Solves http://projecteuler.net/problem=7 */
#include <stdio.h>

/* Check if the given number is prime */
int Prime(int number)
{
	/* 1 and 2 are prime, but we don't care. */
        int x = 3;
	for(x = 3; x < number; x += 2)
	{
		if(number % x == 0) return 0;
	}
        return 1;
}

int main()
{
	/* Set vars */
	int x = 1;
	int pc = 3;

	/* Loop until we break */
	while(x != 10001)
	{
		/* If we find a prime, incrase x, if x is 10001, break the loop */
		if(Prime(pc) == 1) x++;
		pc += 2;
	}

	/* Print the answer */
	printf("Answer: %d\r\n",pc);

	return 0;
}
