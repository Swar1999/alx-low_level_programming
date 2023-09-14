#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - entry point
 * description : function that execute another function
 * @array : pointer of array
 * @size : size of array
 * @action : function pointer
 * return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
		if (array == NULL || action == NULL)
			return;
		for (i = 0; i < size; i++)
			action(array[i]);
}
