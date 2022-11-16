#include "function_pointers.h"
/**
 * array_iterator - prints out an array of size (size)
 * @array: the array given
 * @size: the size of the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
