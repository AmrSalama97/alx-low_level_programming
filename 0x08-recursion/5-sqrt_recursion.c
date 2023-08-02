#include "main.h"

/**
 * _sqrt_recursion - return the natural square of an int
 * sqrt2 - evaluation  from 1 to n
 * @n: the integr
 * @a: same  as n
 * @b: number from 1 to n
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

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

