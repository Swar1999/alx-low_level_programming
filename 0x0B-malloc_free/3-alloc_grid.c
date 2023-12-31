#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: with of array
 * @height: heigth of array
 * Return: the address of array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ary;
		if (width <= 0 || height <= 0)/*frist check*/
			return (NULL);
		ary = malloc(height * sizeof(int *));/*allocat memory*/
		if (ary == NULL)/*malloc failed*/
		{
			free(ary);
			return (NULL);
		}
		for (x = 0; x < height; x++)
		{
			ary[x] = malloc(width * sizeof(int));
			if (ary[x] == NULL)
			{
				for (x--; x >= 0; x--)
				free(ary[x]);
				free(ary);
				return (NULL);

			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
				ary[x][y] = 0;
		}
		return (ary);
}
