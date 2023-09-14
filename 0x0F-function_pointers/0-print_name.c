#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entry point
 * Description : function that prints name
 * @name : pointer
 * @f : function pointer
 * return : always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}


