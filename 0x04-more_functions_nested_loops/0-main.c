#include "main.h"

/**
 * main - A test program for _isupper program
 *
 * Loop Statement - while: Check if the test element
 *			is not empty/terminated
 *
 * Return: 0

int main(void)
{
	int i = 0;

	char test[11] = "School Boy";
	
	printf("%s = ", test);

	while (test[i])
		printf("%i", _isupper(test[i++]));
	putchar(10);
	
	return (0);
}
