#include "main.h"
/**
 * _isalpha -checks for alpha
 * @c: a single char
 * Return: 1(true) or 0(false)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'));
}
