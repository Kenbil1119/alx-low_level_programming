#include <stdio.h>
#include "main.h"

/**
 * swp_int - Swap the value of two interger variable
 *
 * @a: First parameter, pointer to get a new value from
 *			pointer 'b'
 * @b: Second parameter, pointer to get a new value from
 *			pointer 'a' through pointer 'c'
 * c: A pointer declear to save the old value of pointer 'a'
 *
 * swp_int: This function is to swap the value of
 *		two integer variables through pointers
 */

void swp_int(int *a, int *b)
{
	int *c;

	*c = *a;

	{
		*a = *b;
	}

	*b = *c;
}
