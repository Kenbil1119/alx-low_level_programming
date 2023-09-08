#include <stdio.h>

/**
 * main - Entry point
 * main function: printf
 * main prints: Size of data type in my machine
 *
 * Main Keyword: sizeof, int, char, float, long
 *
 * Return: 0;
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
