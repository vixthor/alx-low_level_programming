#include "main.h"
/**
 * _puts_recursion - prints out string followed by a new line
 * @s: the string to be printed.
 * Return: 0 if successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
