#include <stdio.h>

/**
 * main - Find and print the largest prime factor of a
 *					number
 *
 * Return: 0
 */

int main(void)
{
	const long int num = 612852475143;

	long int factor = 1, i, j;

	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0)
				{
					if (j == i)
						factor = i;
				}
			}
		}
	}

	printf("%ld\n", factor);

	return (0);
}

