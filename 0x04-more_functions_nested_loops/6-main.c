#include "main.h"

/**
 * main - Call print_line() to print specified line(s)
 *					to the output
 *
 * Return: 0;
 */

int main(void)
{
	printf("5 lines: ");
	print_line(5);
	printf("15 lines: ");
	print_line(15);
	printf("0 line: ");
	print_line(0);
	printf("-4 line: ");
	print_line(-4);

	return (0);
}
