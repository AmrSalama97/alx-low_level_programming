#include <stdio.h>

/**
 *main function - write the program name 
 *@argc : is the number of the arguments
 *@argv : is the address of argc which include the string values
 * Return : this is return 0
 */

int main (int argc,char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);

}
