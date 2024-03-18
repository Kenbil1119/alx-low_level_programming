#include "main.h"

/**
 * main - Test print_array()
 *
 * Return: 0
 */

int main(void)
{
	int arr[10], i;

	for (i = 0; i < 10; i++)
		arr[i] = i;

	print_array(arr, 10);
	print_array(arr, 5);

	return (0);
}
