#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function "putchar"
 * main - prints all posible combinations of single-digit number
 *
 * Return: Always (0)
 */

int main(void)
{
	int n = 15;

	while (n < 38)
	{
		putchar(n);
		if (n != 38)
		{
			putchar(32);
			putchar(34);
		}
		n++;
	}
	putchar((n % 10) + '0');
return (0);
}
