#include <stdio.h>
#include "main.h"

/**
 * main - Calling of swp_int() to swap integer variable value
 *
 * Function: swp_int(), printf()
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	x = 98;
	y = 49;

	printf("/* Before swp_int() call */\n");

	printf("x: %d\n", x);
	printf("y: %d\n", y);

	printf("/* After swp_int() call */\n");

	swp_int(&x, &y);

	printf("x: %d\n",x);
	printf("y: %d\n", y);

	return (0);
}
