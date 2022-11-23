#include "main.h"
/**
 * _memset - fills out memory with a constant byte
 * @s: the character pointer
 * @b: the byte
 * @n: no of byte being filled
 * Return: the byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
