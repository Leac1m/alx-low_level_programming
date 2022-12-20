#include "main.h"
/**
 * rev_string - that reverses a string
 * @s: sting pointer
 */
void rev_string(char *s)
{
	int count, i = 0;
	char tmp;

	count = _strlen(s);
	count--;
	while (i < count)
	{
	tmp = s[count];
	s[count] = s[i];
	s[i] = tmp;
	}
}
