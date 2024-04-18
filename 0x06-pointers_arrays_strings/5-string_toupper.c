#include "main.h"

/**
 *
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

	return(str);
}
