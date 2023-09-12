#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar
 * main Data type: int
 *
 * Loop Statement: for
 *
 * main - prints all possible combination of a single digit,
 *				separated with comma ','
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar(10);

	return (0);
}
