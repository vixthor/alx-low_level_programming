#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 * Return: value
 */
void more_numbers(void)
{
	char a;

	int n;

	n = 0;

	while (n < 11)
	{
		for (a = '0' ; a <= 14 ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}

