#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: string to be printed
 * @f: pointer to name
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		/* there is no string or not in the memeory*/
		return;
	f(name);/*get access to it*/
}
