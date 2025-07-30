#include "lists.h"

/**
 * free_list - is function that frees a list_t
 *
 * @head: is the head of the list
 *
 * Return:
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
