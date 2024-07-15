/**
*int_index - search for an integer whit a specified processing function.
*@array: Pointer to the array.
*@size: size of the array.
*@cmp: pointer to This function that search for an integer.
*Return: 0
*allocation memory to each element of the array.
**/
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int int_index(int *array, int size, int (*cmp)(int))
{
int *tmp;
int i;
if (size <= 0)
{
return (-1);
}

tmp = malloc(sizeof(int) * size);
if (tmp == NULL)
{
return (0);
}

for (i = 0; i < size; i++)
{
tmp[i] = array[i];
cmp(array[i]);
if (cmp(array[i]) != 0)
{
free(tmp);
return (i);
}
}
free(tmp);
return (-1);
}
