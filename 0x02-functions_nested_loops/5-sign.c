#include "main.h"
/**
 * print_sign - print out the sign of the number inputed
 *
 * @n: the value to be inputted
 *
 * Return 1 ,-1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
