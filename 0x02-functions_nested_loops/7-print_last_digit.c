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
	int last_digit = num % 10;

	printf("%d", last_digit);

	return (last_digit);
}
