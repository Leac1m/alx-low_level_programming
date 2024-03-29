#include "3-calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that calculates using arguments.
 * @argc: argument count.
 * @argv: lists of argments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") && strcmp(argv[2], "-") &&
	strcmp(argv[2], "*") && strcmp(argv[2], "/") && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	i = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
return (0);
}
