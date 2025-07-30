#include "lists.h"

/**
 * *add_node - is a function that adds
 * a new node at the beginning of a list_t
 *
 * @head: is the head of list_t
 * @str: is the information for the node.
 *
 * Return : address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	int len = 0;

	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);

	new_element->str = strdup(str);

	if (!new_element->str)
	{
		free(new_element);
		return (NULL);
	}

	while (new_element->str[len] != '\0')
	{
		len++;
	}
	new_element->len = len;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}