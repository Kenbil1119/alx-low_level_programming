#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Invoke strcat()
 *
 * @dest: Parameter to be concatenated from 'src'
 * @src: Parameter to get data to be concatenated into 'dest'
 * @n: Number of data to be concatenated from 'src' to 'dest'
 *
 * Function - strcat(): Copy 'n' bytes of 'src'
 *				to the end of 'dest'
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
