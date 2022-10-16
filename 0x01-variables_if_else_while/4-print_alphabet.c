#include <stdio.h>
/**
 * main - this is a function
 *
 * Return: 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		switch(a)
		{
			case 'e':
				a++;
				break;
			case 'q':
				a++;
				break;
		}
		putchar(a);
	putchar('\n');
	return (0);
}
