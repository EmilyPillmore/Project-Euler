/* Solves: http://projecteuler.net/problem=21 */

#include <stdio.h>

int d(int num)
{
	int sum = 0;
	int i;

	for(i = 1; i <= num-1; ++i)
		if (num % i == 0)
			sum += i;

	return sum;
}

int checknum(int num)
{
	int n1 = d(num);
	int n2 = d(n1);

	return (num == n2 && n1 != n2) ? num : 0;
}


int main()
{
	int i;
	int sum = 0;
	for(i = 1; i <= 10000; ++i)
		sum += checknum(i);

	printf("Answer: %d\r\n", sum);

	return 0;
}
