#include "lists.h"
/**
 * sum_dlistint-sum of all data
 * @head:start of list
 * Return:sum of data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp = head;
	if (head == NULL)
	return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
return (sum);
}
