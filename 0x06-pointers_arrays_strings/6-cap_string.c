#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: array
 * return: result
 */
char *cap_string(char *str)
{
char *sign = ",:.!?\"(){,}";
char *abc = "abcdefghijklmnopqrstuvwxyz";
int i, j;

while (*str != '\0')
{
	for(i = 0; i < 26; i++)
	{
	if (sign[i] == *str)
	{
	for(j = 0; j < 26; j++)
	{
	if (*(str + 1) == abc[j])
	{
	*(str + 1) = abc[j] + 32;
	}
	}
	}
	}
	str++;
	}
	return (sign);
}
