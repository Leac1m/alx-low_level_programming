#include "main.h"
#include <string.h>
/**
*puts2 - a function that prints every other character of a string,
*starting with the first character, followed by a new line.
*@str: string pointer
*/
void puts2(char *str)
{
int count, i = 0;
count = strlen(str);
count--;
while (i < count)
{
if (i % 2 == 0)
_putchar(str[i]);

i++;
}
_putchar('\n');
}
