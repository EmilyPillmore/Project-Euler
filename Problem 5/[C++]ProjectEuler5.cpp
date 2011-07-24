// Problem 5: http://projecteuler.net/index.php?section=problems&id=5
#include <stdio.h>

int main()
{
	// Set the variables
	int x = 0;
	int check = 0;

	// Loop until we break it
	while(true)
	{
		// Only check numbers ending in 0 since any number that is a
		// multiple of 10 or 20 will end in 0.
		x += 10;
		printf("Trying: %d\r\n", x);

		// Check if it's divisible by 1-20
		for(int y=1;y<=20;y++)
		{
			if(x % y == 0) check++;
		}

		// If it's divisible by all 20 numbers, break the loop
		if(check == 20) break;
		else check = 0;

	}

	// Print the answer
	printf("Answer: %d\r\n", x);
}
