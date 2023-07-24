#include "main.h"
/**
 *puts(char *str) - function
 *for char in string
 *@char is the character
 *@str is the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
