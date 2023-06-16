#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * multiply - multiplies two numbers.
 * @num1: First number.
 * @num2: Second number.
 * Return: product.
 */
int multiply(int num1, int num2)
{
	int mul = (num1 * num2);
	return (mul);
}
/**
 * validateInput - validates if input is digit.
 * @str: input.
 * Return: 1 otherwise 0.
 */
int validateInput(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - receives two digits as arguments, and print product.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 (success) else 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!strcmp(argv[1], "") || !strcmp(argv[2], ""))
	{
		printf("Error\n");
		exit(98);
	}

	if (!validateInput(argv[1]) || !validateInput(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
