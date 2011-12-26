#ifndef SIEVEE_H_26122011
#define SEIVEE_H_26122011
/* This will fill seive with a table of primes between 1 and number
	use table[x] == '1' to see if prime, or 0 for notprime */
void SeiveE(char table[], int number)
{
	int x, y;

	for(x = 1; x <= number; ++x)
		table[x] = 1;

	for(x = 4; x <= number; x += 2)
		table[x] = 0;

	for(x = 3; x <= number; x += 2)
		for(y = x*2; y <= number; y += x)
			table[y] = 0;

	return;
}

#endif
