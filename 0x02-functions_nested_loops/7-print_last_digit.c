#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Get the Last digit of a number in 'num'
 *
 * Function: printf()
 *
 * @num: Integer prototype
 *		to check that input number is 'int' data_type
 *
 * Conditional Statement - if: check if num is a negative value
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	num %= 10;

	if (num < 0)
	{
		printf("%d", -num);

		return (-num);
	}

	printf("%d", num);

	return (num);
}
