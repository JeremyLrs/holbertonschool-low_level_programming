#include "lists.h"

/**
 * *add_dnodeint_end - function that adds
 * a new node at the end of a dlistint_t
 *
 * @head:  the head of the linked list.
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));

	if (!new_element)
		return (NULL);

	new_element->n = n;

	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_element;
	new_element->prev = temp;

	return (new_element);
}
