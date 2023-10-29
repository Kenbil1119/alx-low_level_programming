#include "variadic_functions.h"

/**
 * main - Call a self-define function 'sum_them_all'
 *
 * @argc: Integer parameter that read total inputs vector
 * @argv: Character pointer of pointer parameter
 *	pointing to the inputs vector
 *
 * Loop Statement - for: Iterate 'i'
 *		for a string to integer conversion
 *
 * Functions - sum_them_all(): Read each value of "arr_num"
 *		then return the sum of the values (vectors)
 *	- printf(): prints to the standard output
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, sum;
	int arr_num[4];

	for (i = 1; i < argc; i++)
	{
		arr_num[i - 1] = atoi(argv[i]);
	}

	sum  = sum_them_all(4, arr_num[0], arr_num[1], arr_num[2], arr_num[3]);

	printf("Sum of inputs = %d.\n", sum);

	return (0);
}
