#include "main.h"

/**
 *_puts_recursion Function prints a string
 *@s is the string
 */

void _puts_recursion(char *s)
{
        if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	if (*s > 0)
	{
		_putchar ("%c",*s);
		_puts_recursion(s+1);

}
