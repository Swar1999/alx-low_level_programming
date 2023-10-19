#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function to free the linked list
 * @head - struct argument
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *swap;
		while (head != NULL)
		{
			swap = head->next;
			free(head->str);/*free the data first*/
			free(head);/*free all*/
			head = swap;
		}
}
