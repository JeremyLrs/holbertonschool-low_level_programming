#include "lists.h"

/**
 * print_dlistint - function that prints all
 * the elements of a dlistint_t
 *
 * @h: is the head
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%i\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
