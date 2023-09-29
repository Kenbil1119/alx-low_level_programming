#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Call strlen() to get length of 's'
 *
 * @s: Character parameter to get string
 *
 * Function: strlen(), _strlen_recursion()
 *
 * Return: String lenght of 's'
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
