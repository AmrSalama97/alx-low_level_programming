#include <stdio.h>

/**
 * main -Write a program that prints the number of arguments passed into it.
 * @args: is the count of the arguments
 * @argv: is the value of the argument
 * Return: this is to return 0
 */

int main(int args, char *argv[])
{
	printf("%d\n",args-1);
	(void)argv;
	return (0);
}
