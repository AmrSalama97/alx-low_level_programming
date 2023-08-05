#include <stdio.h>
#include <stdlib.h>
/**
 *main -Write a program that multiplies two numbers.
 *Your program should print the result of the multiplication, followed by a new line
 *@args: this is the arguments count
 *@argv: this is the arguments vector
 *Return: this will return 1 in success and error in failure
 */
int main(int args, char *argv[])
{
	int i, multiplication;
	
	multiplication = 1;
	if (args < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < args; i++)
	{
		multiplication = multiplication * atoi(argv[i]);
	}
	printf("%d\n", multiplication);
	return (0);
}	
