#include "function_pointers.h"
/**
 * print_name - prints out the name thats given
 * @name: the name given
 * @f: void
 * @char: character
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
