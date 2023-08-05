#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers

 * @args: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int args, char *argv[])
{
	int sum = 0, i;

	if (args > 1)
	{
		for (i = 1; i < args; i++)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < args; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
