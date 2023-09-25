#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function to add new node at the begginig
 * @head : pointer
 * @str : new string to be added
 * Return: address of the new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	unsigned int i;
		while (str[i])
			i++; /*read all the string to be duplicated*/
		h = malloc(sizeof(list_t));
		if (!h) /*new node has not been created*/
			return (NULL);
		h->str = strdup(str); /*duplicat the string into new node*/
		h->len = i; /*the length of string*/
		h->next = (*head); /*pointer to the frist node*/
		(*head) = h;/*update the frist node*/
		return (*head);
}
