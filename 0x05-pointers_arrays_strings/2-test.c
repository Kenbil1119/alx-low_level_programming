#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Calling _strlen();
 *
 * Function: printf(), _putchar(), _strlen()
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "Hello, World!";
	char my_name[] = "Usman Saheed";

	printf("The size of 'Hello, World!' in my machine, ");
	printf("stored as a string is: %d-bytes\n", _strlen(str));
	_putchar(10);
	printf("The size of my name (%s) in my machine, ", my_name);
	printf("stored as a string is: %d-bytes\n", _strlen(my_name));

	return (0);
}
