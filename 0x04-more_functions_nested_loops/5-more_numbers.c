#include "main.h"

/**
 * more_numbers - Function invoke
 *	"print_numbers" to print the first 10
 *	digit character of ascii
 *	and print more numbers, upto '14'.
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		print_numbers();
		for (j = '0'; j <= '4'; j++)
		{
			_putchar('1');
			_putchar(j);
		}
		_putchar(10);
	}

	return (0);
}

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
}
