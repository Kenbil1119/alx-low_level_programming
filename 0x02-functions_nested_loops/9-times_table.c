#include "main.h"

/*
int _last_digit(int num);
int _first_digit(int num);
void _separator(void);
*/

void times_table(void)
{
	int i, j, n;
	/*int ld = 0, fd = 0;*/

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			/*
			if (n > 9)
			{
				fd = _first_digit(n);
				ld = _last_digit(n);
				_putchar(fd + 48);
				_putchar(ld + 48);
			}
			else
				_putchar(n + 48);
			if (j != 9)
			{
				if (n > 9)
					_separator();
				else
				{
					_separator();
					_putchar(' ');
				}
			}*/
			if (j != 9)
				printf("%3d, ", n);
			else
				printf("%3d", n);
		}
		_putchar('\n');
	}
}
/*
int _last_digit(int num)
{
	return(num % 10);
}

int _first_digit(int num)
{
	return(num / 10);
}

void _separator(void)
{
	_putchar(',');
	_putchar(' ');
}*/
