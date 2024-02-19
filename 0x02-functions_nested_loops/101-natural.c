#include <stdio.h>

/**
 * main - Find all the multiples of 3 or 5 in the range
 *		of numbers under 1024 and print the sum
 *		of the numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	for(i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}

