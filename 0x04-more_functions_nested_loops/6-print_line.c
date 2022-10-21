#include "main.h"
/**
 * print_line - prints a line n times
 * @n: the value
 * Return: value
 */
void print_line(int n)
{
	int a;

	while (a <= n)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		a++;
	}
	_putchar('\n');
	return (0);
}
