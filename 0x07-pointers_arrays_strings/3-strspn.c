#include "main.h"
/**
 * _strspn - a function to get the length of a prefix substring
 * @s: the initial segment
 *
 * @accept: where the bytes have to consist of
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a]  != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[c])
				{
					c++;
				}
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
