#include "main.h"
/**
 * takes the variable 
 * to a pointer 
 * and update the value
 */
int main (void) 
{
	int n ;
	n=402 ;
	putchar('/'"n value is %d " ,n);
	p=&n;
	*p=402;
	putchar ('/'"n value is %p ",n);
	return (0);
}

