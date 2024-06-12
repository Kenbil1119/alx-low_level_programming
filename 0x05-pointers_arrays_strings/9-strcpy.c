#include "main.h"

/**
 * _strcpy - A function that copies the string pointed
 *	to by src, including the terminating null byte
 *	(\0), to the buffer pointed to by dest.
 *
 * @dest: Pointer to Buffer receiving copy
 * @src: Pointer to string source
 *
 * Return: the pointer to dest
 * FYI: The standard library provides a similar function:
 *	strcpy. Run man strcpy to learn more.
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long i, j;

	if (src == NULL)
		return (dest);

	for (i = 0, j = strlen(dest); src[i] != '\0'; i++, j++)
		dest[j] = src[i];
	dest[i] = '\0';

	return (dest);
}
