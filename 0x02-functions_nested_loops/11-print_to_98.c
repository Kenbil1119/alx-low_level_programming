#include "main.h"

/**
 * print_to_98 - Print all possible numbers between given
 *		numbers saved in 'n' to 98 in ascending order
 *
 * @n: Integer Prototype to read given number
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
