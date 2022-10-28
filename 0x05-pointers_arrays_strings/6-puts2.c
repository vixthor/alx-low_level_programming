#include "main.h"
/**
 * puts2 - prints out every other character
 * @str: the string
 * Return: value
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != 0; string++)
	{
		if (string % 2 == 0)
		{
			_putchar(str[string]);
		}
		_putchar('\n');
	}
}
