#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate a memery address for a pointer with
 *				'b' space
 *
 * @b: Unsigned integer to get the size needed
 *
 * Function - malloc(): Standard library function call to do the
 *				memeory allocation
 *
 * Conditional Statement -if: Checked if 'b' is not empty
 *
 * Return: a pointer to the address allocated, else, exit with 98
 */

void *malloc_checked(unsigned int b)
{
	char *s =  malloc(sizeof(*s) * b);

	if (s == NULL)
		exit(98);
	return (s);
}

