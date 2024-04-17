#include <stdio.h>
#include <string.h>

/**
 * _strncat - Copy the string pointed by 'src' to 'dest'
 *
 * @dest: Pointer pointing to an old string.
 *	it will be used to hold string and concatinate
 *	string from 'src'
 * @src: Pointer pointing to string to copy
 * @n: Determine the n bytes of storgae in 'src' to copy
 *
 * Return: New string in 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, dest_size = 0;
	char *copy_str = dest;

	dest_size = strlen(dest);

	if (n == 0)
		return (dest);

	if (src == NULL || dest == NULL)
		return (dest);

	for (i = 0, j = dest_size; i < n; i++, j++)
		copy_str[j] = src[i];

	return (copy_str);
}
