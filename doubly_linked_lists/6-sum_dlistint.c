#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t
 *
 * @head: the head of the linked list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum)
}
