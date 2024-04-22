#include "main.h"


/**
 * _strcmp - Compare two string and returns
 *
 * @s1: pointing to frist String
 * @s2: Pointing to second String
 *
 * Return: The different value of the first character to
 *	be different in both 's1' and 's2'.
 *	Return 0 if no different found.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		continue;
	}

	return (0);
}
