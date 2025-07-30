#include "lists.h"

/**
 * print_list - is a function that prints
 * all the elements of a list_t
 *
 * @h: link to the list
 *
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	int size = 0;

	const list_t *temporary;

	temporary = h;

	while (temporary != NULL)
	{
		if (temporary->str == NULL)
		{
			printf("[0] (nil)\n");
			temporary = temporary->next;
			size++;
		}
		printf("[%d] %s\n", temporary->len, temporary->str);
		++size;
		temporary = temporary->next;
	}
	return (size);
}
