#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		char a;

		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
		n++;
	}
}
