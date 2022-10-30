#include "main.h"
/**
 * print_number - prints out a number
 * @n: the value to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		number = -number;
	}
	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');
}
