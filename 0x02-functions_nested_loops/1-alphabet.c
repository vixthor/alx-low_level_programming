#include "main.h"
/**
 * main - prints the aplhabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a;
	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
