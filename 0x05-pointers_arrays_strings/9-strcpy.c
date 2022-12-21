#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strcpy -  a function that copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed
* to by dest.
*@dest: array to be altered.
*@src: array to copy from.
* Return: @dest
*/
char *_strcpy(char *dest, char *src)
{
int srclen, i;

srclen = strlen(src);
printf("before loop, srclen : %d\n", srclen);
for (i = 0; i < srclen; i++)
{
dest[i] = src[i];
}
return (dest);
}
