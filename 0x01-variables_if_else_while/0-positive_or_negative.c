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
	int num;
	num = rand() - RAND_MAX / 2;
	if (num < 0)
	{
		printf (num ,"%d is positive");
	} else if (num = 0) {
		printf (num "%d is zero");
	} else {
		printf (num, "%d is negative");
	};
	return (0);
}
