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
	unsigned long i = 0;

	if (src == NULL)
		return (dest);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i + 1] = '\0';

	return (dest);
}
