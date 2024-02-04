#include "main.h"

/**
 * add - Add two numbers and convert their sum from
 *	Integer to Character before printing out
 *
 * @a: First Integer number
 * @b: Second Integer number
 *
 * sprintf(): Carried out the convertion from Integer
 *		to String if greater than 9 (Two digit)
 */

void add(int a, int b)
{
	int sum = a + b;

	if (sum > 9)
	{
		char str[98];
		int i;

		sprintf(str, "%d", sum);

		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
		_putchar(sum + 48);
}
