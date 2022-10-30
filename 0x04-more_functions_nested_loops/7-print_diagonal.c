#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: the value
 * Reutrn: the value
 */
void print_diagonal(int n)
{
	int c, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n ; c++)
		{
			for (b = 0; b < c; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
