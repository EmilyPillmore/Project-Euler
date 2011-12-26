/* Not entirely sure what these are for, but someone suggested
	to use them, so we are. */
#ifndef PRIME_H_24122011
#define PRIME_H_24122011

/* Declare function */
int IsPrime(int number)
{
	/* 1 and 2 are both prime, so this catches them */
	if(number < 3 && number > 0)
		return 1;

	/* Any even number other than 2 is not prime. */
	if(number % 2 == 0)
		return 0;

	/* Declare variables */
	int x = 3;
	int limit = number;

	/* Loop while x < limit. */
	for(x = 3; x < limit; x += 2)
	{
		/* If this hits the number isn't prime. */
		if(number % x == 0)
			return 0;

		limit = number / x;
	}

	/* Number is prime. */
	return 1;
}

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
		for(y = x*2; y <= number-x; y += x)
			table[y] = 0;

	return;
}

#endif
