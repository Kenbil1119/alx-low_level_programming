#include "main.h"

/**
 * positive_or_negative - check the charge on an integer data
 *
 * @i: Integer data to check
 *
 * Conditional Statement - if: Check if 'i' is not 0
 *			- if-else: Check if 'i' is +ve or -ve
 *
 * charge: Print the respective charge of 'i'
 */

void  positive_or_negative(int i)
{
	int n;

	n = i - i;

	if ((i == 0) & (n == 0))
		printf("Is Neutral\n");
	else
		if (i < 0)
			printf("Is Negative\n");
		else
			printf("Is Positve\n");
}
