#include "lists.h"
#include <string.h>
#include <strlib.h>
/**
 * add_node_end - function to add node at the end
 * @head: struct argument
 * @str:data of new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *swap = *head;
	unsigned int i = 0;
		while (str[i])
			i++;/*read throw the string*/
		h = malloc(sizeof(list_t));
		if (!h)/*malloc failed*/
			return (NULL);
		h->str = strdup(str);
		h->len = i;
		h->next = NULL;
		if (*head == NULL)/*raech the end of list*/
		{
			*head = h;
			return (h);
		}
		while (swap->next)
			swap = swap->next;
		swap->next = h;
		return (h);
}
