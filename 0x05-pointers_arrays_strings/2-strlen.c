#include "main.h"

/**
 * int _strlen(char *s) - for string length
 * @s the string 
 */

int _strlen(char *s) 
{
	int length;
	
	length = 0;

	while s[length] !=0 
	{
		length ++; 
        }
	return (length);
}
