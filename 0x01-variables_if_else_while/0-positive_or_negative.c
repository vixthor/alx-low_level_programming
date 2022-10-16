#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Display a result based on the value of num
 *
 * Description: Using an if else statement and rand function to create a result
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf ("%d is positive\n", n);
	} else if (n > 0) {
		printf ("%d is negative\n", n);
	} else {
		printf ("%d is zero\n", n);
	};
	return (0);
}
