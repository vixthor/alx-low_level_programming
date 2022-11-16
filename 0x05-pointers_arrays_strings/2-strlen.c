#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: character
 * Return: value
 */
int _strlen(char *s)
{
	int number;
	int i;

	i = 0;
	number = 0;
	while (s[i] != '\0')
	{
		number++;
		i++;
	}
	return (number);
}
