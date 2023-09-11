#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * main - Function: printf strand
 * main - Keyword: void
 * main - Data type: int
 *
 * Conditonal Statement: if-else
 * Loop Statement:
 *
 * print_n: new function to invoke 'n'
 *
 * @var: prototype member
 *
 * main - Return: 0
 */

void print_n(int var)
{
	printf("%d", var);
}

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		print_n(n);
		printf("is negative\n");
	}
	else
	{
		if (n == 0)
		{
			print_n(n);
			printf("is zero\n");
		}
		else
		{
			print_n(n);
			printf("is positive\n");
		}
	}
	return (0);
}
