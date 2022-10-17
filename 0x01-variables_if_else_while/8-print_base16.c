#include <stdio.h>
/**
 * main - im a function
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 0 ; a <= 9 ; a++)
		putchar((a % 10) + '0');
	for (a = 'a' ; a <= 'f'; a++)
		putchar(a);
	putchar(a);

	return (0);
}
