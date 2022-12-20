#include "main.h"
/**
* print_rev - a function that prints a string,
* in reverse, followed by a new line.
*@s: pointer for string
*/

void print_rev(char *s)
{
int count = 0;

while (count >= 0)
{

if (s[count] == '\0')
break;
/*_putchar(s[count]);*/
count++;
}
for (count--; count >= 0; count--)
{
_putchar(s[count]);
}
_putchar('\n');
}
