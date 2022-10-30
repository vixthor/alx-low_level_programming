#include <stdio.h>
/**
 * main - prints out the fibonacci first 50 numbers
 * Return: first 50 fibonacci numbers
 */

int main(void)
{
	int F1, F2, count = 0;
	int temp;

	F1 = 1;
	F2 = 2;

	for (count = 0; count <= 50; count ++)
	{
		printf("%d, ", F1);
		printf("%d, ", F2);
		temp = F2;
		F2 += F1;
		F1 = temp;
	}
	printf("\n");
	return (0);
}

