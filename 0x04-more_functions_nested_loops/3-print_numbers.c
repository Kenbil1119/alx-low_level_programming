#include "main.h"

/**
 * print_numbers - Prints number from 0 to 9
 *
 * Loop Statement - for: iterate num
 *
 * Author: Usman Saheed .K (uskehinde@gmail.com)
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar(10);
}
