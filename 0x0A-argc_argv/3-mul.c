#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: This is the argument count
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
	for (i = 1; index < args; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
