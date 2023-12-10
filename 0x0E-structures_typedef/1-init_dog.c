#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Program to initialize the "dog" structure data
 *
 * @d: Parameter of pointer, to read variable name of struct
 *						data type
 * @name: Parameter pointer to initialize "d.name" of struct
 *		data type pointing to variable "name" in the
 *		"dog" structure data
 * @age: Parameter pointer to initialize "d.age" of struct
 *		data type pointing to variable "age" in the
 *		"dog" structure data
 * @owner: Parameter pointer to initialize "d.owner" of struct
 *		data type pointing to variable "owner" in the
 *		"dog" structure data
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf(NULL);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
