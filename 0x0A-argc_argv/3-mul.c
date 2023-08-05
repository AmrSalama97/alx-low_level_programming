#include <stdio.h>
/**
 *main -Write a program that multiplies two numbers.
 *Your program should print the result of the multiplication, followed by a new line
 *@args: this is the arguments count
 *@argv: this is the arguments vector
 *Return: this will return 1 in success and error in failure
 */
int main(int args, char *argv[])
{
	int i;
	int multiplication;

	if (args < 3)
	{
		printf("Error\n";
		return (1);
	}
	if (args > 3)
	{
		for (i = 0; i < args; i++)
		{
		multiplication = multiplication * atoi(argv[i]);
		}
		printf("%d\n", multiplication);
		return (0);
	}
}
			
