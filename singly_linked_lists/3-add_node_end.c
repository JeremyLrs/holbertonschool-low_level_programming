#include "lists.h"

/**
 * add_node_end - Function that adds
 * a new node at the end of a list_t
 *
 * @head: is the head of list_t
 * @str: is the information for the node.
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_element;
	unsigned int len = 0;

	new_element = malloc(sizeof(list_t));

	if (!new_element)
		return (NULL);

	new_element->str = strdup(str);

	while (str[len] != '\0')
	{
	len++;
	}
	new_element->len = len;

	new_element->next = NULL;

	if (!new_element->str)
	{
		free(new_element);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_element;

	return (new_element);
}
