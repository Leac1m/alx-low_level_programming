#include "main.h"
/**
* _puts -  prints a string, followed by a new line, to stdout.
* @str: pointer to string
*/
void _puts(char *str)
{

while (*str != '/o')
{
_putchar(*str++);
}
_putchar('\n');
}
