#include "main.h"
/**
 * _puts - prints out a string
 * @str: the string
 * Return: the string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		for (; *str ; )
		{
			_putchar(str[i]);
			
		}
	}
	_putchar('\n');

}
