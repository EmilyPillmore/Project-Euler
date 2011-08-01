#include <stdio.h>

int main()
{
	/* vars */
	int number = 0;
	int counter = 1;
	int check = 0;
	int divisors = 0;

	/* loop until we break */
	while(1)
	{
		printf("Checking: %d\r\n", number);
		number += counter;
		counter++;

		check = 1;
		divisors = 0;

		/* Check every number under number/2 */
		for(check = 1; check <= number/2; check++)
		{
			if(number % check == 0) divisors++;
		}

		/* If divisors > 500, got the answer, break */
		if(divisors > 500) break;
	}

	printf("Answer: %d\r\n", number);
}
