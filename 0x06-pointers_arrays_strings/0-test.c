#include <stdio.h>
#include "main.h"

/**
 * main - Print and copy strings from 'str2' to 'str1'
 *
 * Function: printf(), putchar(), puts(), _strcat()
 *
 * NOTE: The string variable to append to must have enough space
 *		to save the new appending string.
 * Return: 0
 */

int main(void)
{
	char str1[50] = "Hello, World! ";
	char str2[] = "ALX School is so cool!";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	_putchar(10);

	_puts("After calling '_strcat()'\n");

	_strcat(str1, str2);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return (0);
}
