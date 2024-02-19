#include <stdio.h>

int main(void)
{
	int *ptr_int;
	int sum = 34;
	char str[10];

	printf("3 + 2 = %c\n", '3' + '2');

	ptr_int = &sum;

	printf("%d\n", ptr_int[0]);
	{
		sprintf(str, "%d\n", sum);

		printf("%c", str[0]);
	}

	return (0);
}
