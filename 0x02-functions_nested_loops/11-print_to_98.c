#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: the integer
 * Return: the result
 */

void print_to_98(int n)
{
	int count, no;

	no = n;
	for(no = 0; no <= 98; no++)
	{
		count++;
	}
	while (n < 99)
	{
		if (count = 1)
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
