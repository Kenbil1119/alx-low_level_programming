#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Calling strcat()
 *
 * Function: strcat()
 *
 * @dest: character parameter to append to
 * @str: character parameter to append from
 *
 * _strcat: Copy strings pointed by 'str' to the
 *		end of string pointed by 'dest'
 *
 * Return: dest
 */

char _strcat(char *dest, char *str)
{
	strcat(dest, str);

	return (*dest);
}
