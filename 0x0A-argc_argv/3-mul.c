#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiples of two numbers
 * @argc:arg count(expects 3)
 * @argv:arg values in array
 * @Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
