#include "lists.h"
/**
 * sum_listin-sum of data
 * @head:atart list
 * Return:sum of n
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;
	/*listint_t *temp = head;*/

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
