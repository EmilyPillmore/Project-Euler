// Problem 4: http://projecteuler.net/index.php?section=problems&id=4
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

// Convert the number to a string
string ToString(int number)
{
	stringstream NString;
	NString << number;
	return (NString.str());
}

int CheckPalindrome(int number)
{
	string str = ToString(number);
	string::iterator begin = str.begin();
	string::iterator end = str.end() -1;

	// Check the first and last number, second two in, third two in, etc
	for (; begin < end; begin++, end--)
	{
		// If they don't match it's not one
		if(*begin != *end)
		{
			return 0;
		}
	}

	// If it made it this far, it's one.
	return 1;
}
int main()
{
	// Largest one found
	int largestp = 0;

	// Start the first number at 999 and decrease by 1 each time
	for(int n1 = 999; n1 > 0; n1--)
	{
		// Start the second number at 999 and decrease by 1 each time
		for(int n2 = 999; n2 > 0; n2--)
		{
			// Call the palindrome check
			if(CheckPalindrome(n1*n2) == 1)
			{
				printf("Palindrome: %d\r\n",n1*n2);
				if(largestp < (n1*n2))
				{
					// If the found one is bigger than the previous, set it.
					largestp = (n1*n2);
				}
			}
		}
	}

	// Print the biggest.
	printf("Answer: %d\r\n", largestp);
}
