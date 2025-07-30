#include "lists.h"

/**
 * dlistint_len - function that returns
 * the number of elements in a linked dlistint_t
 *
 * @h: is the head
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);

}
