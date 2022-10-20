#include "main.h"
/**
 * print_most_numbers - prints all numbers except  2 and 4
 * Return: the value
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		if (c = '2')
			c++;
		if (c = '4')
			c++;
		_putchar(c);
	}
	_putchar ('\n');
}
