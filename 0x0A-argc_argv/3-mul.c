#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @args: This is the argument count
 * @argv: This is the argument vector
 * Return: 0;
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
