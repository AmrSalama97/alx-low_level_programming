#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same as n
 * @b: number 1 to n
 * Return: On success 1.
 * On error, -1 is return
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
 * _sqrt_recursion - returns the natural square root
 * @n: Number Integer
 * Return: On success 1
 * On error, -1 is return
 */


int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

