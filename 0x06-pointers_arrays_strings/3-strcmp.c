#include "main.h"


/**
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i, cmp = 0;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
		cmp += (s1[i] - s2[i]);

	return (cmp);
}
