#include <stdio.h>

int main()
{
	// Set the variables.
	int counter = 1;
	int sum = 0;

	// While checking every number under 1000
	while(counter < 1000)
	{
		// If the checking number is devisible by 3 or 5
		// then add it to the sum
		if ((counter % 3 == 0) || (counter % 5 == 0)) sum = counter+sum;

		// Incrase the counter
		counter++;
	}

	// Print the answer
	printf("Answer: %d\r\n", sum);
}
