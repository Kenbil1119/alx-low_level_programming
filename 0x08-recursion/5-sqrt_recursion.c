#include "main.h"

int check_sqrt(int num, int root);

int _sqrt(int num)
{
	int initial_root;

	initial_root = num - 1;

	if (num == 0)
		return (0);
	if (num == 1)
		return (1);

	check_sqrt(num, initial_root);
}

int check_sqrt(int num, int root)
{
	if (root == 1)
		return (-1);
	if ((root * root) == num)
		return (root);
	check_sqrt(num, root - 1);
}
