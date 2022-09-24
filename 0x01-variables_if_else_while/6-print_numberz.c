#include <stdio.h>
#include <stdlib.h>

/**
 * main - function "putchar"
 * main - prints all single digit numbers in base 10 starti
 * ng from 0 using putchar, without using any char variables.
 *
 * Return: Always (0)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
return (0);
}
