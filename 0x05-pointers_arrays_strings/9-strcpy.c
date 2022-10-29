#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string pointed to from the src to dest
 * @dest: character destination location
 * @src: character to check
 * Return: 0 if successful
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return(dest);
}
