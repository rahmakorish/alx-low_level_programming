#include "lists.h"
/**
 * sum_dlistint-sum of all data
 * @head:start of list
 * Return:sum of data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	return (0);
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
