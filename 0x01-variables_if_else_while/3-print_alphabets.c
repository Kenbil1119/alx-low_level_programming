#include <stdio.h>
#include <stdlib.h>

/**
 * main - function "putchar"
 * main - prints lowercase and uppercase letters of the alphabet.
 *
 * Return: Always (0)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
return (0);
}
