#include "main.h"

/**
 * main - Invoke a macro "__FILE__" to print the name of the
 *		source file currently used by the preprocessor
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
