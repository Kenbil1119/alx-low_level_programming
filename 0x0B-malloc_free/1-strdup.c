#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return memory to a pointer
 *
 * @str: Character pointer parameter
 *
 * T
 * Return: Null if str = NULL else return s
 */

char *_strdup(char *str)
{
	char *s = strdup(str);

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(*str) - 1);

	return (s);
}
