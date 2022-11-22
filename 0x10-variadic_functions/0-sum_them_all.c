#include "variadic_functions.h"
/**
 * sum_them_all - summ all given digdts
 * @n: the first int
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list multiple;

	va_start(multiple, n);
	for (i = n
