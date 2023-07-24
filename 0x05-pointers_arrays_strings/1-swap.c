#include "main.h"
/**
 * swap int function
 * swaps the ints
 * @a and b
 */
void swap_int(int *a, int *b)
{
	int c ;
	c = *a ;
	*a = *b;
	*b = c;
}
