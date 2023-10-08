#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

int main(void)
{
	char *c;
	int *i;
	double *d;
	float *f;

	c = malloc_checked(sizeof(char) * 1024);
	printf("char malloc: %p\n", (void *)c);

	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);

	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);

	f = malloc(sizeof(float) * 100000000);
	printf("%p\n", (void *)f);

	free(i);
	free(c);
	free(d);
	free(f);

	return (0);
}
