#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *  free_grid - Entry point
 * Description: program that frees a 2 dimensional grid
 * @grid : pointer
 * @height : integer
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
}

