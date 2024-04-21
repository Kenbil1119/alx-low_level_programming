#include "main.h"


/**
 * _strcmp - Compare two string and returns
 *
 * @s1: pointing to frist String
 * @s2: Pointing to second String
 *
 * Return: The sum of the first character of the
 *	first string and the first character of
 *	the second string
 */

int _strcmp(char *s1, char *s2)
{
	int  cmp = 0;

	cmp = s1[0] - s2[0];

	return (cmp);
}
