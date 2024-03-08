#include <stdio.h>

/**
 * main - Find and print the largest prime factor of a
 *					number
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long prime;

	while(num--)
	{
		if((num % 2 == 0) || (num % 3 == 0))
			continue;
		else
		{
			prime = num;
			break;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
