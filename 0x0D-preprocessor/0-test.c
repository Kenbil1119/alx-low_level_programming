#include "main.h"
#include "0-object_like_macro.h"

/**
 * main - Invoke and print a macro named "SIZE" define in the
 *	"0-object_like_macro.h" header file with an acronym 1024.
 *
 * Return: 0
 */

int main(void)
{
	int gigabyte = SIZE;

	printf("1 Gigabyte of data is: %d megabytes\n", gigabyte);

	return (0);
}
