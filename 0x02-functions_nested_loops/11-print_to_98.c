#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: the integer
 * Return: the result
 */

void print_to_98(int n)
{
	for ( ; n <= 98 ; n++)
	{
		printf("%d", n);
		if  (n < 98)
			printf(", ");
	}
	printf("\n");
}
