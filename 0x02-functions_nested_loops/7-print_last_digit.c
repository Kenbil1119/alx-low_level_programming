#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Get the Last digit of a number in 'num'
 *
 * @num: Integer prototype
 *		to check that input number is 'int' data_type
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int last_digit;

	num = abs(num);

	last_digit = num % 10;

	return (last_digit);
}
