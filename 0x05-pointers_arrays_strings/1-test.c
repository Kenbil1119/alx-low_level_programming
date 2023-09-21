#include <stdio.h>
#include "main.h"

/**
 * main - Calling of swap_int() to swap integer variable value
 *
 * Function: swap_int(), printf()
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	x = 98;
	y = 49;

	printf("/* Before swap_int() call */\n");

	printf("x: %d\n", x);
	printf("y: %d\n", y);

	printf("/* After swap_int() call */\n");

	swap_int(&x, &y);

	printf("x: %d\n", x);
	printf("y: %d\n", y);

	return (0);
}
