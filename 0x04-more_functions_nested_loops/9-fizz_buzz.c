#include "main.h"
#include <stdio.h>
/**
 * main - prints out fizz for 3 buz for 5 and fizbuz for 5 & 3
 * Return: 0
 */

int main(void)
{
	int a;
	
	for (a = 0; a <= 100; a++)
	{
		if (a % 3 = '0')
		{
			printf("Fizz");
		}
		else if (a % 5 = '0')
		{
			printf("Buzz");
		}
		else if ( a % 5 = '0' && a % 3 = '0')
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", a);
		}
		return (0);
	}
}
