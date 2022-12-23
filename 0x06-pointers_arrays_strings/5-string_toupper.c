#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @str: array.
 */
char *string_toupper(char *str)
{
	char *ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *abc = "abcdefghijklmnopqrstuvwxyz";
	int i;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			for (i = 0; i < 26; i++)
			{
				if (*str == abc[i])
				{
					*str = ABC[i];
				}
			}
		}
		str++;
	}
	return (str);
}
