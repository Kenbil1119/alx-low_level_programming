#include <stdio.h>
#include "dog.h"

/**
 * main - Test the custom header file (dog.h)
 *		inclusion of structure data type (dog).
 *
 * Return: Always 0
 */

int main(void)
{
	struct dog my_dog;
	char reply = ' ';

	my_dog.name = NULL;
	my_dog.age = 0.0;
	my_dog.owner = NULL; 

	puts("Register your Dog at Pet Enviromental control");
	
	printf("Dog Name: ");
	scanf("%s", my_dog.name);
	putchar(10);

	printf("Dog Age: ");
	scanf("%f", &my_dog.age);
	putchar(10);

	printf("Dog Owner: ");
	scanf("%s", my_dog.owner);
	putchar(10);
	
	puts("Confirm your dog information before continue");
	puts("Enter \"Yes\" or \"Y\" to continue, \"No\" or \"N\", to Change\n");
	scanf("%c\n", &reply);
	if(reply == 'Y' || 'y')
	{
		printf("Dog Name: %s\nDog Age: %f\nDog Owner: %s\n", my_dog.name, my_dog.age, my_dog.owner);
		puts("✅ Now your dog is registered successfully!");
		return (0);
	}
	else
		printf("Error\n");
}
