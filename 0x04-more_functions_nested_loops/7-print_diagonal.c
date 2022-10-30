#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: the value
 * Reutrn: the value
 */
void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = '0'; c < n ; c++)
			_putchar('\');
		_putchar('\n');
	}
}
