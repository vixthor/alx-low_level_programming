#include "lists_h"

/**
 * list_len - checks the code length
 * @n:  name of the list
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	int  count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
