#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - is a function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int s;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	s = (n % 10);
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, s);
	}
	else if (s != 0 && s < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, s);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, s);
	}
	printf("\n");
	return (0);
}
