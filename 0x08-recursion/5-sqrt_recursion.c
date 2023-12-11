#include "main.h"

/**
 * _sqrt_recursion - Program to check the perfect
 *		square root of a number.
 *
 * @num: Integer Parameter that read the number to find
 *		it perfect square root
 *
 * Return: 1, if num is 1, 0, if num equal 0,
 *	-1 if num is less than 0 or not a perfect
 *	square root.
 *
 * Author: Usman Saheed .K
 */

int _sqrt_recursion(int num)
{
	int initial_root;

	initial_root = num - 1;

	if (num == 0)
		return (0);
	if (num == 1)
		return (1);
	if (num < 0)
		return (-1);

	check_sqrt(num, initial_root);
}

/**
 * check_sqrt - Program to check for the perfect
 *				root of "num"
 *
 * @num: Integer parameter to find if it has
 *				perfect root
 * @root: Integer parameter to save new root in
 *					checkings
 *
 * Return: -1, if root check is less than 1
 *	returns "root" value, if perfect root is find.
 */

int check_sqrt(int num, int root)
{
	if (root < 1)
		return (-1);
	if ((root * root) == num)
		return (root);
	check_sqrt(num, root - 1);
}
