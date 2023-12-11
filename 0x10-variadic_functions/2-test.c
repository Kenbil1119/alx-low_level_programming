#include "variadic_functions.h"

/**
 * main - Invoke print_strings
 *
 * Return: 0
 */

int main(void)
{
	print_strings(", ", 2, "Hello", "World");
	print_strings(NULL, 4, "I", "create", NULL, "error");

	return (0);
}
