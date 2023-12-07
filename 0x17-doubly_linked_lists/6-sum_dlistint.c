#include "lists.h"
/**
 * sum_dlistint-sum of all data
 * @head:start of list
 * Return:sum of data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
	return (0)
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
