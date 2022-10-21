#include "main.h"
/**
 * print_line - prints a line n times
 * @n: the value
 * Return: value
 */
void print_line(int n)
{
	int a;

	for (a = '0'; a < n ; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
