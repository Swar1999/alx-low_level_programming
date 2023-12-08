#include "lists.h"
/**
 * *add_dnodeint - function that add new node at the begining
 * @head: poniter
 * @n: node data
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_s *new_node;
		new_node = malloc(sizeof(dlistint_s));
		if (!new_node)
			return (NULL);
		if (*head != NULL)
		{
			new_node->n = n;
			new_node->next = *head;
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (new_node);
}
