#include <stdio.h>
#include <stdlib.h>

/**
 * main - function "putchar"
 * main - prints all alphabet except 'e' and 'q'.
 *
 * Return: Always (0)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

		putchar('\n');
return (0);
}
