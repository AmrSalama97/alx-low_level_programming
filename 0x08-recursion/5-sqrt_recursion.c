#include "main.h"

/**
 * _sqrt_recursion - return the natural square of an int
 * @n: the integr
 * Return 1 on success
 * return -1 on error
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - return the natural square of an int
 * @n: the integr
 * Return 1 on success
 * return -1 on error
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

