#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function compares two string.
 * @s1: first array.
 * @s2: second arrat.
 * Return: (0 <), (0) or (0 >). depending on the comparism.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
	       if (s1[i] != s2[i])
	       		break;
	}
	return (s1[i] - s2[i]);

}
