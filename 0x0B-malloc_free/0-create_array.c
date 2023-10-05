#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array if condition is 1 (true)
 *
 * @size: Integer parameter to get the size of 's'
 * @c: Character parameter to initialize 's'
 *
 * Conditional Statement - while: check if true
 *			- if: Check if size is not empty
 *
 * Return: NULL if size is 0 or failed else return 's' as a Pointer
 */

char *create_array(unsigned int size, char c)
{
	char s = c;

	if (c == '\0')
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	return (s);
}
