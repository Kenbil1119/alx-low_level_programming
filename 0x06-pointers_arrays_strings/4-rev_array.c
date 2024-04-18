#include "main.h"

/**
 * reverse_array - Reverse elements of array to it source
 *
 * @a: Pointer pointing to Source
 * @n: Number of elements to reverse
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, rev_arr[98];

	if (n <= 0)
		return;

	for (i = n - 1, j = 0; i >= 0; i--, j++)
		rev_arr[j] = a[i];

	j = i = 0;
	while (j < n)
	{
		a[i] = rev_arr[j];

		i++;
		j++;
	}
}
