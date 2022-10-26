#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string in question
 * Return: the reversed string
 */

void rev_string(char *s)
{
	int i, count, end;
	char temp;

	count = 0;
	i = 0;

	while (s[count] != '\0')
	{
		count ++
	}

	end = count - 1;
	for (i = 0; end >= 0 && i < end; end--, i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
	}
}
