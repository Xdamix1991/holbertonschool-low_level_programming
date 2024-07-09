/**
*free_grid - function that returns a pointer to a two dimensional array
*@height: lines of array
*@grid: array in two D
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void free_grid(int **grid, int height)
{
int h;
if (grid == NULL || height <= 0)
{
return;
}
for (h = 0; h < height; h++)
{
free(grid[h]);
}
free(grid);
}
