#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data structure type with three variable
 *
 * @name: String constant of char* data type
 * @age: Float data type
 * @owner: string constant of char* data type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
