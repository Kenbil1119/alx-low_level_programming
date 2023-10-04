#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Invoke isdigit() to check if an data in
 *						'c'  is digit
 *
 * @c: Integer prototype to get data for checkings
 * Function: isdigit()
 *
 * Return: rt
 */

int _isdigit(int c)
{
	int rt = isdigit(c);

	return (rt);
}
