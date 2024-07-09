/**
*alloc_grid - function that returns a pointer to a two dimensional array
*@height: lines of array
*@width: colones of array
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int **alloc_grid(int width, int height)
{
int **array;
int h;
int w;
int i;
if (height <= 0 || width <= 0)
{
return (NULL);
}
array = (int **)malloc(height * sizeof(int *));
if (array == NULL)
{
return (NULL);
}
for (h = 0; h < height; h++)
{
array[h] = (int *)malloc(width * sizeof(int));
if (array[h] == NULL)
{
for (i = 0; i < h; i++)
{
free(array[i]);
}
free(array);
return (NULL);
}
for (w = 0; w < width; w++)
{
array[h][w] = 0;
}
}
return (array);
}
