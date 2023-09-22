#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap and Print the value of two integer variables
 *
 * @a: parameter
 * @b: paraneter
 */

void  swap_int(int *a, int *b)
{
	int a[2], b[2];

	a[0] = 65;
	b[0] = 66;

	{
		printf("a = %d\n", *a);

		printf("b = %d\n", *b);
	}

	a[1] = a[0];

	{
		a[0] = b[0];

		printf("a = %d\n", *a);
	}

	{
		b[0] = a[1];

		printf("b = %d\n", *b);
	}
}
