#include "main.h"

/**
 * main - Print "Fizzbuzz" if a number in the range of
 *	1 to 100 is a multiple of 5 and 3
 *	print "Fizz" if the number is a multiple of 3
 *	print "Buzz" if the number is a multiple of 5
 *	else print the number if no condition match.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
		{
			if ((i % 3) == 0)
				printf("Fizz");
			else
				if (i % 5 == 0)
					printf("Buzz");
				else
					printf("%d", i);
		}
		if (i != 100)
			_putchar(' ');
	}
	_putchar('\n');

	return (0);
}
