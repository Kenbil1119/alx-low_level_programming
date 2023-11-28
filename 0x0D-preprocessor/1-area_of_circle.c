#include "main.h"
#include "1-pi.h"

/**
 * main - Program to collect a data as a radius of a circle
 *	Calculate the area of the circle using a
 *	"PI" object-like macro in a formular (πr²).
 *	Where π is "PI" (Object-like macro of value:3.14159265359)
 *	where r² is r * r (Varaible with value from user)
 *
 * @argc: Parameter for argument count
 * @argv: Array of stirng parameter for arguments saving
 *
 * Return: "EXIT_FAILURE" if no radius pass, Area if Successful
 *
 * Author: Usman Saheed .k
 */

int main(int argc, char *argv[])
{
	int r;

	if (argc == 1)
	{
		printf("Radius (r) not found!\n");

		exit(EXIT_FAILURE);
	}

	r = atoi(argv[1]);

	if (argc > 2)
	{
		puts("Excess of radius input!!!\nFirst radius we be put into use\n");

		printf("Area of circle of radius: %s = %.02f\n", argv[1], PI * r * r);

		return (PI * r * r);
	}

	printf("Area of circle of radius: %s = %.02f\n", argv[1], PI * r * r);

	return (PI * r * r);
}
