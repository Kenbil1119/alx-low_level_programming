#include "main.h"

/**
 * print_array - Prints the number of element of an
 *		integer array separated by ', '
 *
 * @a: Array to print
 * @n: Number of element to print
 */

void print_array(int *a, int n)
{
	int i;

	if ((sizeof / int*) == 0)
	{
		printf('\n');
		return;
	}

	if (n < 0)
	{
		printf('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);

			return;
		}
		printf("%d, ", a[i]);
	}
}
