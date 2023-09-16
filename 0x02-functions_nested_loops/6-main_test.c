#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Call _abs()
 *
 * Function: _abs(), printf(), scanf()
 * Data Type: int
 *
 * main: Printing inputs integer in it absolute value
 * Return: 0
 */

int main(void)
{
	int prt = 0;

	scanf("%d", &prt);
	printf("%d\n", _abs(prt));

	return (0);
}
