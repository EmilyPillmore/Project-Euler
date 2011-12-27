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
	int x;
	int limit = number; // This will make the search faster

	/* Loop while x < limit. */
	for(x = 3; x < limit; x += 2)
	{
		/* If this hits the number isn't prime. */
		if(number % x == 0)
			return 0;

		/* Making the limit number/x instead of just number
			we gain a noticable speed increase */
		limit = number / x;
	}

	/* Number is prime. */
	return 1;
}

#endif
