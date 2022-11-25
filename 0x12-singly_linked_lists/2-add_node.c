#include "lists.h"
/**
 * strlen - length of the string
 * @s: s is a character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

list_t *add_node(list_ **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (dd == NULL)
	{
		return (NULL);
	}
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
