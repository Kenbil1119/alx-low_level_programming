#include "main.h"

/**
 * times_table - Function to print 9 times table
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == n)
				printf("%2d\n", k);
			else
				if (j == 0)
					printf("%d, ", k);
				else
					printf("%2d, ", k);
		}
	}
}
