#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Program print the elements of a struct data
 *
 * @d: A pointer pointing to a struct data type
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %p\n", NULL);
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0.0)
		printf("Age: %p\n", NULL);
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %p\n", NULL);
	else
		printf("Owner: %s\n", d->owner);
}
