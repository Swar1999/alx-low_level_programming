#include "lists.h"
/**
 * reverse_listint - function that revers linked list
 * @head : pointer
 * Return: the address of the frist reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;/*the previous node*/
	listint_t *next = NULL;/*the next node*/
		while (*head != NULL)
		{
			next = (*head)->next;/*save next node points to current node*/
			(*head)->next = pre;/*switch pointers of hcurrent and previous nodes*/
			pre = *head;/*previous in current place*/
			*head = next;/*next in current place*/
		}
		*head = pre;/*make current pointer points to previous*/
		return (*head);
}
