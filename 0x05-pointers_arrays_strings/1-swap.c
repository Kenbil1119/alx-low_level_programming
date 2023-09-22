#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap the value of two interger variable
 *
 * @a: First parameter, pointer to get a new value from
 *			pointer 'b'
 * @b: Second parameter, pointer to get a new value from
 *			pointer 'a' through pointer 'c'
 * temp: A temporary varaible to save the old value of pointer 'a'
 *
 * swap_int: This function is to swap the value of
 *		two integer variables through pointers
 *		with the help of 'temp' variable, it is possible
 *		to temporarily save the value of 'a'
 *		somewhere (temp variable)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
