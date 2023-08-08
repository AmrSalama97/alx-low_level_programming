#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;
	if (size == 0)
        {
                _putchar("Null");
                return (0);
        }
	s = malloc((size)*sizeof(char));
	if (s == 0)
	{
		_putchar("Null");
		return (0);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

