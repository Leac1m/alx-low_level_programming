#include "main.h"
/**
_put_recursion - print a string, followed by a new line.
@s: string to print
*/
void _put_recursion(char *s)
{
    _putchar(*s);
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _put_recursion((s + 1));

}