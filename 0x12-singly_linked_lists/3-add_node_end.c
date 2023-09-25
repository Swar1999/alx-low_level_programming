#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function to add new node at the end of list
 * @head : pointer
 * @str : new string to be added
 * Return: address of the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *swp = *head;
	unsigned int i = 0;
		while (str[i])
			i++; /*read all the string to be duplicated*/
		h = malloc(sizeof(list_t));
		if (!h) /*new node has not been created*/
			return (NULL);
		/*creat a node at the end*/
		h->str = strdup(str); /*duplicat the string into new node*/
		h->len = i; /*the length of string*/
		h->next = NULL; /*pointer to the frist node*/
		if (*head == NULL) /*reached the last node update the pointer*/
		{
			*head = h;
			return (h);
		}
		/* to swape between the pointers*/
		while (swp->next)
			swp = swp->next;
			swp->next = h;
			return (h);
}
