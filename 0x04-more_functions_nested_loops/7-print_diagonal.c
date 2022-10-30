#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: the value
 * Reutrn: the value
 */
void print_diagonal(int n)
{
	int c;

	for (c = '0'; c < n ; c++)
		_putchar("\\");
	_putchar('\n');
}
