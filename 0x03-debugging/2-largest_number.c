#include "main.h"

/**
 * largest_number - Checks the largest number from three integers
 *
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 *
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	/*if (a  > b && b > c)*/
	if ((a >= b) && (a >= c))
		largest = a;
	/*else if (b > a && a > c)*/
	else
		if ((b >= a) && (b >= c))
			largest = b;
		else
			if ((c >= a) && (c >= b))
				largest = c;

	return (largest);
}

