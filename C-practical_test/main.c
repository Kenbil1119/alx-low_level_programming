#include "main.h"

/**
 *
 */

int main(int argc, char *argv[])
{
	int day, month, year;
	int i;

	if (argc <= 1)
	{
		puts("⚠️Unable to read the day, month, and year⚠️");

		exit(EXIT_FAILURE);
	}

	if (argc != 4)
	{
		puts("⚠️Unable to read the day, month, and year⚠️");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < argc; i++)
	{
		if (argv[i] == NULL)
		{
			printf("⚠️⚠️⚠️Error encounter while reading input data: %s\n", argv[i]);
			exit(EXIT_FAILURE);
		}
	}
	
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("⚠️⚠️⚠️Error encounter while reading input data: %s\n", argv[i]);
			exit(EXIT_FAILURE);
		}
	}

	day = atoi(argv[1]);
	month = atoi(argv[2]);
	year = atoi(argv[3]);

	if (strlen(argv[3]) != 4)
	{
		puts("Incompatible year");
		printf("The year must be four (4) characters\n");

		exit(EXIT_FAILURE);
	}

	set_date(day, month, year);
	printf("✅✅\n");

	return (0);
}
