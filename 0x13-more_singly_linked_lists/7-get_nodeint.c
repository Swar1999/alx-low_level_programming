#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function that
 * gives the nth node
 * @head : struct element
 * @index : node element
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;/* to reach the nth placement*/
		while (head != NULL && counter < index)
		{
			head = head->next;
			counter++;
		}
		if (head != NULL)
			return (head);
		else
			return (NULL);
}
