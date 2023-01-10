#include <stdio.h>
/**
 * main - prints a name of program
 * @argc: number of string input
 * @argv: value of agruments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
