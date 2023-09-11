#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_n - Invoke and prints 'n'
 *
 * print_n - Function: printf
 * print_n - Data type: int
 *
 * print_n: new define function to invoke and prints 'n'
 *
 * @var: prototype member
 *
 * Return: void
 */

void print_n(int var)
{
	printf("%d", var);
}

/**
 * main - Entry point
 *
 * main - Function: printf, srand
 * main - invoke print_n and print if 'n' is positive or negative
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		print_n(n);
		printf(" is negative\n");
	}
	else
	{
		if (n == 0)
		{
			print_n(n);
			printf(" is zero\n");
		}
		else
		{
			print_n(n);
			printf(" is positive\n");
		}
	}
	return (0);
}
