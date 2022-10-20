#include "main.h"
/**
 * _islower - checks if character is lowercase
 *
 * Return: 0 or 1
 * @c: contains a value
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
