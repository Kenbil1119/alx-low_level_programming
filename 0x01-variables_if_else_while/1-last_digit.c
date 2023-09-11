#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_n - Invoke 'n'
 *
 * print_n - Function: printf
 *
 * print_n - invoke and prints value of 'n'
 *
 * @var: prototype to check for integer variable
 *
 * Return: 0
 */

void print_n(int var)
{
	printf("%d", var);
}

/**
 *  print_remainder - Execute (n % 10)
 *
 *  print_remainder - Function: printf
 *
 *  print_remainder - prints the  result of (n % 10)
 *		which is the last number of 'n' value
 *
 *  @remn: parameter to check for integer variable
 *
 *  Return: 0
 */

void print_remainder(int remn)
{
	printf("%d", (remn % 10));
}

/**
 * main - Code start running here
 *
 * main - Function: printf, srand, print_n, print_remainder
 *
 * Conditional Statement: if-else
 *
 * main - prints the value of 'n' and the last number
 *	check if it is greater than 6 or less, or equal to zero
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of ");
		print_n(n);
		printf(" is ");
		print_remainder(n);
		printf(" and is greater than 5\n");
	}
	else
		if ((n % 10) == 0)
		{
			printf("Last digit of ");
			print_n(n);
			printf(" is ");
			print_remainder(n);
			printf(" and is 0\n");
		}
		else
		{
			printf("Last digit of ");
			print_n(n);
			printf(" is ");
			print_remainder(n);
			printf(" and is less than 6 and not 0\n");
		}

	return (0);
}
