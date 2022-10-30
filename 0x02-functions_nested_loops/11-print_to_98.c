#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: the integer
 * Return: the result
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		if (n != 0 && n % 2 == 0)
		{
			printf("%d, ",n);
		}
		else
		{
			printf("%d",n);
		}	
		n++;
	}
}
