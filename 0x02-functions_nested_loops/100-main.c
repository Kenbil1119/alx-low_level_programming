#include "main.h"

/**
 * main - Invoke print_times_table to print times table of the
 *		desire number
 *
 * Return: 0
 */

int main(void)
{
	print_times_table(5);
	putchar(10);
	print_times_table(12);
	putchar(10);
	print_times_table(2);
	print_times_table(0);
	putchar(10);
	print_times_table(100);

	return (0);
}
