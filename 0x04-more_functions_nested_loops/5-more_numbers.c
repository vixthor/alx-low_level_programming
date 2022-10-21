#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 * Return: value
 */
void more_numbers(void)
{
	int n, a;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (a = '0' ; a <= 14 ; a++)
		{
			if (a >= 10)
				_putchar('1');
			_putchar (a % 10 + '0');
		}
		_putchar('\n');
	}
}

