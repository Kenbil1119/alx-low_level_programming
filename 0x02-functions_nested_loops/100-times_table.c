#include "main.h"

/**
 * print_times_table - Function to print 9 times table
 *
 * @n: Integer parameter
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 99)
		return;
	if (n == 0)
	{
		printf("%d\n", n);
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == n)
				printf("%3d\n", k);
			else
				if (j == 0)
					printf("%d, ", k);
				else
					printf("%3d, ", k);
		}
	}
}
