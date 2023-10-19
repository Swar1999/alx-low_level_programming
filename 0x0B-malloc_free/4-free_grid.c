#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function to free the new allocation
 * @grid: pointer;
 * @height: paramter
 * Return:nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(height);
			height--;
		}
		free(grid);
	}
}
