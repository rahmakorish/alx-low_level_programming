#include "main.h"
#include <stdlib.h>
/**
 * free_grid- frees a 2 dimensional array
 * @grid:adress of the 2d grid
 * @height:heigth of the grid
 * Return: 0 success
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	else if (grid[height] == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
