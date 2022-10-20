#include "main.h"
/**
 * _isupper - check if value is in uppercase
 * @c: the value
 * Return: 1 or 0 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
