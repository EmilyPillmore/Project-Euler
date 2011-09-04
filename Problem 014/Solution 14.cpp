#include <iostream>

using std::cout;
using std::endl;

int Even(int number)
{
	return number/2;
}

int Odd(int number)
{
	return (number*3)+1;
}

void StartChain(int number, int& Largest, int& LastCount)
{
	/* counter is the current count */
	int counter = 0;
	int Current = number;

	while (number != 1)
	{
		if ((number % 2) == 0)
		{
			number = Even(number);
		}
		else
		{
			number = Odd(number);
		}
		counter++;
	}

	if (counter > LastCount)
	{
		Largest = Current;
	}

}

int main()
{
	int Largest = 0;
	int i = 1000000;
	int LastCount = 0;
	for(i = 1000000; i > 0; i--)
	{
		StartChain(i, Largest, LastCount);
	}

	cout << "Largest chain was on: " << Largest << endl;

	return 0;
}
