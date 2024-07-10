/**
*array_range - that creates an array of integers.
*@min: minimum value
*@max: maximum value
*Return: On success, returns a pointer to the allocated memory.
*On error, returns NULL.
**/
#include <stdio.h>
#include <stdlib.h>
int *array_range(int min, int max)
{
int i;
int size;
int *array;
/* condition of operating */
if (min > max)
{
return (NULL);
}
/* calculating the size of the array */
size = (max - min) + 1;
/* memory allocation */
array = malloc(sizeof(int) * size);
if (array == NULL)
{
return (NULL);
}
/* inserting values in array */
for (i = 0; i < size; i++)
{
array[i] = min + i;
}
/* the ponter return */
return (array);
}
