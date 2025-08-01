#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position
 *
 * @h: the head of the linked list
 * @idx: is the node position
 * @n: is the information for the node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element, *temp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (!temp && i == idx)
		return (add_dnodeint_end(h, n));
	else if (!temp)
		return (NULL);

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->prev = temp->prev;
	new_element->next = temp;

	if (temp->prev)
		temp->prev->next = new_element;
	temp->prev = new_element;

	return (new_element);
}
