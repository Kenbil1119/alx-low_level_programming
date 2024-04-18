#include "main.h"

/**
 * string_toupper - Convert all lowercase character of
 *		a string to Uppercase
 *
 * @str: Pointer pointing to a string sourse
 *
 * Return: Resulted String after conversion to Uppercase
 */

char *string_toupper(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		else
			continue;
	}

	return (str);
}
