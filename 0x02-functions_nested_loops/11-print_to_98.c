#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: the integer
 * Return: the result
 */

void print_to_98(int n)
{
	int count;

	for(n = 0; n <= 98; n++)
	{
		count++;
	}
	n = 0;
	while (n < 99)
	{
		if (count <= 1)
		{
			printf("%d",n);
		}
		else
		{
			printf("%d, ",n);
		}	
		n++;
	}
	printf("\n");
}
