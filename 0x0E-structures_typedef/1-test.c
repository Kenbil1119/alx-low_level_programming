#include <stdio.h>
#include "dog.h"

/**
 *
 */

int main(void)
{
	struct dog *dog_info = 0;
	char *name = "Puppy";
	float age = 5.5;
	char *owner = "Bob";

	init_dog(dog_info, name, age, owner);

	printf("My name is: %s, and my dog name is: %s which is %f old\n", dog_info->owner, dog_info->name, dog_info->age);

	return (0);
}
