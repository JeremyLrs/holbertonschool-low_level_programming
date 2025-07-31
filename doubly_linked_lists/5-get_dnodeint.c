#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t
 *
 * @head: the head of the linked list
 * @index: is the position to thw node
 *
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int position = 0;

	while (temp)
	{
		if (position == index)
		{
			return (temp);
		}
		temp = temp->next;
		position++;
	}
	return (NULL);
}
