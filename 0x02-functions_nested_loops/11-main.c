#include "main.h"

/**
 * main - Invoke print_to_98() to print from desire number to 98
 *		in ascending order
 *
 * Return: 0
 */

int main(void)
{
	print_to_98(0);
	putchar(10);
	print_to_98(70);
	putchar('\n');
	print_to_98(98);
	putchar('\n');
	print_to_98(-98);

	return (0);
}
