#include <stdio.h>

// Check if the given number is prime
int Prime(int number)
{
	// 1 and 2 are prime, but we don't care.
        int x = 3;
        while(x < number)
        {
		// The number isn't prime
                if(number % x == 0) return 0;
		// We only check odd numbers
                x += 2;
        }
        return 1;
}

int main()
{
	// Set vars
	int x = 1;
	int pc = 3;

	// Loop until we break
	while(true)
	{
		printf("Checking: %d\r\n", pc);
		// If we find a prime, incrase x, if x is 10001, break the loop
		if(Prime(pc) == 1) x++;
		if(x == 10001) break;
		pc += 2;
	}

	// Print the answer
	printf("Answer: %d\r\n",pc);
}
