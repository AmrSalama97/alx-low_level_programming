#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name, without having to
 *@argc: is the number of the arguments
 *@argv: is the address of argc which include the string values
 * Return: this return to 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
