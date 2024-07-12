/**
*free_dog - function to free a variable of type dog_t
*@d: Pointer to type dog_t
*Return: void return
**/
#include "dog.h"
#include <stdio.h>
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
free(d);
}
