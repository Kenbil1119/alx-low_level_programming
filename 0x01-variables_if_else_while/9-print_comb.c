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
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar(10);
return (0);
}
