#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i = 1, result = 0;

	if (argc > 1)
	{
		do
		{
			if (isdigit(atoi(argv[i])) > 0 )
			{
				break;
				puts("Error");
				
				return (1);
			}

			result += atoi(argv[i]);
			i++;
		}while (i < argc);

		printf("%d\n", result);
		
		return (0);
	}

	puts("0");

	return (0);
}

