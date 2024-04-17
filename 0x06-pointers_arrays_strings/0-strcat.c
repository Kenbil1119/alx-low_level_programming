#include <stdio.h>
#include <string.h>

/**
 * _strcat - Copy the string pointed by 'src' to 'dest'
 *
 * @dest: Pointer pointing to an old string.
 *	it will be used to hold string and concatinate
 *	string from 'src'
 * @src: Pointer pointing to string to copy
 *
 * Return: New string in 'dest'
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i, j, src_size = 0, dest_size = 0;
	char *copy_str = dest;

	src_size  = strlen(src);
	dest_size = strlen(dest);

	for (i = 0, j = dest_size; i < src_size; i++, j++)
		copy_str[j] = src[i];

	return (copy_str);
}
