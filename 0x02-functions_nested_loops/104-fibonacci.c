#include <stdio.h>

/**
 * main - Prints the first 50 numbers of fibonacci
 *
 * i: Save the time in which the loop occours to maintain
 *		that it is not more than 97.
 * j: Saved every first occurence of the number
 *		starting from 1
 * k: Saved every second occurence of the number
 *	(new fibonacci) which later use as 'j' in the
 *	expression (j = k).
 * fibon: Being the new fibonacci number
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int j  = 1, k, fibon = 1;

	printf("%ld, ", fibon);
	for (i = 0; i < 97; i++)
	{
		k = fibon;

		fibon += j;
		if (i == 97)
			printf("%ld\n", fibon);
		else
			printf("%ld, ", fibon);
		j = k;
	}

	return (0);
}

