#include "main.h"
/**
 * print_last_digit - prints thee last digit
 * @n: the value
 * Return: n
 */
int print_last_digit(int n)
{
	int c;

	c = _putchar(n % 10);
	return (c);
}
