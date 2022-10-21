#include "main.h"
/**
 * print_line - prints a line n times
 * @n: the value
 * Return: value
 */
void print_line(int n)
{
	char a;

	for (a = '0'; a <= n; a++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
	return (0);
}
