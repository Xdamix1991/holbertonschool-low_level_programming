/**
*init_dog -  initialize a variable of type struct dog
*@d: Pointer to  struct dog
*@name: Pointer to  name of the dog
*@age: Float to age
*@owner: Pointer to owner
**/
#include "dog.h"
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
