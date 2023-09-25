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
			swp = head->next;/*start to copy all the list contains to it*/
			free(head->str);/*free data*/
			free(head);/*free each node memory space*/
			head = swp;
		}
}
