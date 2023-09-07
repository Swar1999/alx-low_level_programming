#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * Description: program that creat an array of integers
 * @min : smaller num
 * @max : large num
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;
		if (min > max)
			return (NULL);
		size = max - min + 1;
		ptr = malloc(sizeof(int) * size);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; min <= max; i++)
			ptr[i] = min++;
		return (ptr);
}
