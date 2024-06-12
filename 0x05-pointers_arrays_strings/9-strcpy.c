#include "main.h"

/**
 * _strcpy - A function that copies the string pointed
 *	to by src, including the terminating null byte
 *	(\0), to the buffer pointed to by dest.
 *
 * Return: the pointer to dest
 * FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long i, j;

	if (src == NULL)
		return dest;

	for(i = 0, j = strlen(dest); i < strlen(src); i++, j++)
		dest[j] = src[i];
	dest[i] = '\0';

	return dest;
}
