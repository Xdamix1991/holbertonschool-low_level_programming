/**
*array_iterator - Prints a name using a specified processing function.
*@array: Pointer to the array.
*@size: size of the array.
*@action: pointer to This function that iterates over a array.
*allocation memory to each element of the array.
**/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void array_iterator(int *array, size_t size, void(*action)(int))
{
int i;
if (array == NULL || action == NULL || size == 0)
{
return;
}
int *temp_array = malloc(sizeof(int) * size);
if (temp_array == NULL)
{
return;
}
for (size_t i = 0; i < size; i++)
{
temp_array[i] = array[i];
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
free(temp_array);
}
