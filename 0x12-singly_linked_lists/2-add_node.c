#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function to add node at the beginng of linked list
 * @head : struct argument
 * @str: new node data
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	unsigned int n = 0;
		while (str[n])
			n++;/*go throw all string*/
		h = malloc(sizeof(list_t));/*reserve an address*/
		if (!h)/*malloc failed*/
			return (NULL);
		h->str = strdup(str);/*copy string in the new node*/
		h->len = n;/*length of the string*/
		h->next = (*head);
		(*head) = h;/*update the head pointer*/
		return (*head);/*address of the new node*/
}
