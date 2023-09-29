#include <stdio.h>
#include "main.h"

/**
 * main - Call _strlen_recursion() to print length of string
 *
 * Function: _strlen_recursion()
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "Hello, World!";
	int n;

	n = _strlen_recursion(str);

	printf("%d\n", n);

	return (0);
}
