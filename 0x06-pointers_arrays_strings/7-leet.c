#include "main.h"

/**
 * leet - Function that Encrypt matching letters to a number
 *						in a string
 *
 * @s: Pointer pointing to a string source
 *
 * Return: The string after manipulation of some letters
 */

char *leet(char *s)
{
	char str[11] = "AaEeOoTtLl";
	char code[11] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j])
				s[i] = code[j];
			continue;
		}

	return (s);
}
