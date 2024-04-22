#include "main.h"


/*
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int src_size = strlen(src);

	if (src == NULL)
		return (dest);

	if (n <= 0)
		return (dest);

	if (n >= src_size)
		n = src_size;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
