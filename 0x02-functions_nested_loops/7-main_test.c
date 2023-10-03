#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - print_last_digit
 *
 * Function: print_last_digit, _putchar
 * Data Type: int
 *
 * main: Prints last digit by calling the print_last_digit()
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = print_last_digit(87);
	printf("%d\n", num);
	printf("last digit of -1024 is %d\n", print_last_digit(-1024));
	printf("Last digit of INT_MAX is: %d\n", print_last_digit(INT_MAX));
	printf("Last digit of INT_MIN is: %d\n", print_last_digit(INT_MIN));
	
	return (0);
}
