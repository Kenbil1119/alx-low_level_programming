#include "main.h"
#include "3-function_like_macro.h"

/**
 * main - Invoke a function-like macro "ABS()" to print an
 *	absolute value of number which is define and compute
 *	in "3-function_like_macro.h" header file.
 *
 * Return: 0
 */

int main(void)
{
	printf("Absolute value of -1024 and 40 are: %d & %d\n", ABS(-1024), ABS(40));

	return (0);
}
