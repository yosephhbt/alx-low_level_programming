#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the address of the two dimenstional grid
 * @height: hegiht of the gird
 */
void free_grid(int **grid, int height)
{
	int a;
	
	if((grid == NULL) || (hegiht == 0))
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
