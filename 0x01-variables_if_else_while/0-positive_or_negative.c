#include <stdio.h>
/**
 * main - Display a result based on the value of num
 *
 * Description: Using an if else statement and rand function to create a result
 */
int main(void)
{
	int num;

	num = rand();

	if (num < 0)
	{
		printf (num ,"is positive");
	} else if (num = 0) {
		printf (num "is zero");
	} else {
		printf (num, "is negative");
	}
}
