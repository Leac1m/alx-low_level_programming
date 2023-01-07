#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the sum of arguments (int)
 * @argc: arguments count
 * @argv: arguments values in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		printf("%s -- %d\n", argv[i], atoi(argv[i]));
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	printf("%d\n", sum);
	return (0);
}
