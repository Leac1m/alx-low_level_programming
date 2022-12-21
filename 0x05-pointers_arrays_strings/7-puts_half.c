#include "main.h"
#include <string.h>
/**
*puts_half - function that prints half of a string,
* followed by a new line.
*@str: string pointer.
*/
void puts_half(char *str)
{
int n, len;
len = strlen(str);
if (len % 2 == 0)
{
n = (len / 2);
}
else
{
n = (len - 1 / 2);
}
while (len > n)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
