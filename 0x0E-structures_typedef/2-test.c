#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - Invoke print_dog function to print all members
 *		of info (which is of struct dog data type)
 *		after initailizing
 *
 * Return: Always 0
 */

int main(void)
{
	struct dog info;

	info.name = "Puppy";
	info.age = 3.6;
	info.owner = "Buddy";

	puts("Registered Dog information");
	print_dog(&info);

	return (0);
}
