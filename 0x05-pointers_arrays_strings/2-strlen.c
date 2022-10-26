#include "main.h"
/**
 * strlen - counts the length of a string
 * @s: character
 * Return: value
 */
int _strlen(char *s)
{
	int number;

	number = 0;
	for (; *s++ ;)
	{
		number++;
	}
	return (number);
}
