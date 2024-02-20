#include <stdio.h>

/**
 * main - Prints the first 50 numbers of fibonacci
 *
 * i: Save the time in which the loop occours to maintain
 *		that it is not more than 50.
 * j: Saved every first occurence of the number
 *		starting from 1
 * k: Saved every second occurence of the number
 *	(new fibonacci) which later use as 'j' in the
 *	expression (j = k).
 * fibon: Being the new fibonacci number
 * sum: Saved the addition of only even fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int j  = 1, k, fibon = 1;
	long int sum = 0;

	i = 0;
	while (fibon <= 4000000)
	{
		k = fibon;

		fibon += j;
		j = k;
		if (fibon % 2 == 0)
			sum += fibon;
		i++;
	}
	printf("%ld\n", sum);

	return (0);
}

