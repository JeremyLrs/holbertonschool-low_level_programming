#include "lists.h"

/**
 * list_len - is a function that returns
 * the number of elements in a linked list_t
 *
 * @h: link to the list
 *
 * Return: the number of elements
 */


size_t list_len(const list_t *h)
{
	int size = 0;

	const list_t *temporary;

	if (h)
	{
		temporary = h;

		while (temporary != NULL)
		{
			++size;
			temporary = temporary->next;
		}
	}
	return (size);
}
