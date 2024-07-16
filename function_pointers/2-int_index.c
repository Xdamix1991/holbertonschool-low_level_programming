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
int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
