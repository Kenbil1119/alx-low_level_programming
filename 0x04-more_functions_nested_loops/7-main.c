#include "main.h"

/**
 * main - Call print_diagonal() to print specified
 *		diagonal line(s) to the output
 *
 * Return: 0;
 */

int main(void)
{
	printf("5 diagonals:\n");
	print_diagonal(5);
	printf("15 diagonals:\n");
	print_diagonal(15);
	printf("0 diagonal:\n");
	print_diagonal(0);
	printf("-4 diagonal:\n");
	print_diagonal(-4);

	return (0);
}
