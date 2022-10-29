#include "main.h"
/**
 * print_sqaure - prints out a square of int size
 * @size: the value itself
 * Return: 0
 */

void print_square(int size)
{
	int a;
	int b;

	b = 0;

	while (b < size)
	{
		if (size <= 0)
			_putchar('\n');
			break;
		else
			for (a = 0; a <= size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		b++;
	}
}
