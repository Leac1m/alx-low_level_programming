#include <stdio.h>
/**
 * main - prints the lasts arguments index
 * @argc: number of arguments
 * @argv: an array of a command listed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
