#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Execute (pld % 10)
 *
 * @num: integer prototype to check its last digit
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int pld = num % 10;

	_putchar (pld);

	return (pld);
}
