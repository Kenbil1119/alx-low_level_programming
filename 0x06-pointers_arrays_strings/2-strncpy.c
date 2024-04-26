#include "main.h"


/**
 * _strncpy - Invoke strncpy
 *
 * @dest: Pointer pointing to a string
 * @src: Pointer pointing to a string source
 * @n: Number of byte(s) to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
