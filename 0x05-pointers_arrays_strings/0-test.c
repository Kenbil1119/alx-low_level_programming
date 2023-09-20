#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0;
 */

int main(void)
{
	int w;

	w = 40;

	printf("Before call.\n");
	printf("Value of 'w'is: %d\n", w);
	printf("After call.\n");
	reset_to_98(&w);
	printf("Value of 'w' is: %d\n", w);

	return (0);
}
