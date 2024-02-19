#include "main.h"

void times_table(void)
{
	char i = '0';
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(i);
		if (n < 9)
			_putchar(',');
	}
}
