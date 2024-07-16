/**
*array_iterator - Prints a name using a specified processing function.
*@array: Pointer to the array.
*@size: size of the array.
*@action: pointer to This function that iterates over a array.
*allocation memory to each element of the array.
**/
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
void array_iterator(int *array, size_t size, void(*action)(int))
{
size_t i;
int temp;
if (array != NULL || action != NULL)
{
temp = malloc(sizeof(int) * size);
if (temp == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
temp[i] = array[i];
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
free(temp);
}
