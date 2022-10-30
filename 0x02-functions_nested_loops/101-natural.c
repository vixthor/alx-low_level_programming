#include <stdio.h>
/**
 * main - prints out the sum of the multiples of 3 or 5 from 1024
 * Return: sum
 */

int main(void)
{
	int sum, n;

	sum = 0;
	for (n =0; n < 1024; n++)
	{
		if ((5 % n) == 0 || (n % 3) == 0)
		{
			sum += n;
		}
		
	}
	printf("%d\n", sum);
	return (0);
}
