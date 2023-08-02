#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
