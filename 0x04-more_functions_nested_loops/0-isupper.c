#include "main.h"
/**
 * _isupper - check if value is in uppercase
 * @c: the value
 * Return: 1 if c is uppercase
 * 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
