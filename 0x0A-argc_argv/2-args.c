#include <stdio.h>

/**
 * main - Write a program that prints all the arguments received
 * @args: this is the count of arguments
 * @argv: this is the argument vector
 * Return: this is to return 0
 */

int main(int args, char *argv[])
{
	int i;
	
	for (i = 0;i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
