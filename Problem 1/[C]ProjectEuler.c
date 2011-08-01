/* Problem 1: http://projecteuler.net/index.php?section=problems&id=1 */
#include <stdio.h>

int main()
{
	/* Set the variables. */
	int counter = 1;
	int sum = 0;

	/* While checking every number under 1000 */
	for(counter = 1; counter < 1000; counter++)
	{
		/* If the checking number is devisible by 3 or 5
		then add it to the sum */
		if (counter % 3 == 0 || counter % 5 == 0) sum = counter+sum;
	}

	/* Print the answer */
	printf("Answer: %d\r\n", sum);
}
