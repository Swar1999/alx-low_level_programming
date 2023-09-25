#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function to free the list
 * @head : struct paramter
 * Return : nothing
 */
void free_list(list_t *head)
{
	list_t *swp;
		while (head != NULL)
		{
			swp = head;/*start to copy all the list contains to it*/
			head = head->next;/*read each node */
			free(swp);/*free each node memory space*/
		}
}
