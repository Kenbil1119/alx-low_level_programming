#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 * main function: write
 * Main Keyword: int, char, sizeof
 * Main Prints: and that piece of art is useful\" - Dora Korpar, 2015-10-19
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";


	write(2, str, sizeof(str));
	putchar(10);

	return (1);
}
