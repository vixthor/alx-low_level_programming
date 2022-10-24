#include "main.h"
/**
 * reset_to_98 - changes the value of a number back to 98
 * @n: the given value
 * Return:98
 */

void reset_to_98(int *n)
{
	int a;

	a = 200;
	n = &a;
	*n = 98;
	return (*n);
}
