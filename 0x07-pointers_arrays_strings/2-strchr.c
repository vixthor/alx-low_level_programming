#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: occurence of the character
 * @s: in the string
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
