#include "main.h"
#include <stdio>
/**
 * rot13 -  function that encodes a string using rot13.
 * @str: string
 * Return: (str)
 */
char *rot13(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}
	while (*str != '\0')
	{
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
                if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str 'Z'))
		{
			*str -= 13;
		}
		else
		{
			*str += 13;
		}
		}
		str++;
	}
	return (str);
}
