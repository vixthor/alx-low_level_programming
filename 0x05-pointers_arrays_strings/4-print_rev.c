#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: the string
 * Return: void
 */

	void print_rev(char *s)
{
	int count, end;

	count = 0;
	while (s[count] != '\0')
		count++;

	for (end = count - 1 ; end >= 0; end--)
	{
		_putchar(s[end]);
	}
	_putchar('\n');
}
