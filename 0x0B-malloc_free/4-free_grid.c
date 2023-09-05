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
	free(grid[height]);
}
