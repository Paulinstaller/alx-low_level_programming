#include "main.h"

/**
 * check - a function that returns the natural square root of a number
 * @f:int
 * @g:int
 *
 * Return: int
 */
int check(int f, int g)
{
	if (f * f == g)
		return (f);
	if (f * f > g)
		return (-1);
	return (check(f = 1, g));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: int to find square root
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
			return (check(1, n));
}
