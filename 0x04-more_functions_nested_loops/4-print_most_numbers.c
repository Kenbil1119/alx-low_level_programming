#include "main.h"

/**
 * print_most_numbers - Prints number from 0 to 9
 *		except 2 and 4
 *
 * Loop Statement - for: iterate num
 *
 * Author: Usman Saheed .K (uskehinde@gmail.com)
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if ((num == '2') || (num == '4'))
			continue;
		_putchar(num);
	}
	_putchar(10);
}
