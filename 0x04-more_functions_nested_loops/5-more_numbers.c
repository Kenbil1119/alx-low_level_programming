#include "main.h"

/**
 * more_numbers - Print the first 10 digit character of
 *	ascii and print more numbers, upto '14'.
 *
 * Description: If number is greater than 9, '1' is print
 *		before the modulo of number.
 *
 *		'48' is used to convert the number to
 *		its ascci character ('0' == 48).
 *
 * Return: 0
 */

void more_numbers(void)
{
	int num, i;

	for (i = 1; i <= 10 ; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('1');
			_putchar((num % 10) + 48);
		}
		_putchar(10);
	}
}
