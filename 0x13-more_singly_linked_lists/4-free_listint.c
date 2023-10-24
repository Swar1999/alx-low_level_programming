#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free the list
 * @head : struct paramter
 * Return :nothing
 */
void free_listint(listint_t *head)
{
	listint_t *swp;
		while (head != NULL)
		{
			swp = head->next;
			free(head);/*free all space*/
			head = swp;
		}
}
