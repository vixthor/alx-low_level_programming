#include <stdio.h>
/**
 * main - prints out the sum of the multiples of 3 or 5 from 1024
 * Return: sum
 */

int main(void)
{
	int sum, n;

	n = 0;
	sum = 0;
	while (n < 1025)
	{
		if (5 % n == 0 || n % 3 == 0)
		{
			sum += n;
			n++;
		}
		else
		{
			n++;
		}
	}
	printf("%d", sum);
	return (0);
}
