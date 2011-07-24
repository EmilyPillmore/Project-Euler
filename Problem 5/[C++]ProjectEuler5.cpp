#include <stdio.h>

int main()
{
	int x = 0;
	int check = 0;

	while(true)
	{
		x += 10;
		printf("Trying: %d\r\n", x);
		for(int y=1;y<=20;y++)
		{
			if(x % y == 0) check++;
		}
		
		if(check == 20) break;
		else check = 0;

	}
	printf("Answer: %d\r\n", x);
}
