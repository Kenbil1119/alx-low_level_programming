#include <stdio.h>

/**
 * main - Find and print the largest prime factor of a
 *					number
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prime = 1;
	unsigned long int i = 3;

	while (i <= num)
	{
		i += 2;

		if (i % 3 != 0)
			prime = i;
		else
			continue;
	}
	printf("%ld", prime);

	return (0);
}

/*
 * esle, skip
 */

/* print sum of prime */

