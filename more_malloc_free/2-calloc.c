/**
*_calloc - Allocates memory for an array and initializes it to zero.
*@nmemb: Number of elements in the array.
*@size: Size of each element.
*Return: On success, returns a pointer to the allocated memory.
*On error, returns NULL.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *tab;

/* Check if the number of elements or the size is zero */
if (nmemb == 0 || size == 0)
{
return (NULL);
}
/* Allocate memory for the array */
tab = malloc((size) * nmemb);
/* Check if the memory allocation failed */
if (tab == NULL)
{
return (NULL);
}
/* Initialize the allocated memory to zero */
for (i = 0; i < nmemb; i++)
{
tab[i] = 0;
}
return (tab);
}
