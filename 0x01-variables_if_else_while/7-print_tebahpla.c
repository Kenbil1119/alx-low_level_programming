#include <stdio.h>
#include <stdlib.h>

/**
 * main - function "putchar"
 * main - prints all alphabet letters in reverse
 *
 * Return: Always (0)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
return (0);
}
