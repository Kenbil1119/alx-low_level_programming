#include "main.h"

/**
 * times_table - Function to print 9 times table
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (j == 9)
				printf("%2d\n", n);
			else
				if (j == 0)
					printf("%d, ", n);
				else
					printf("%2d, ", n);
		}
	}
}
