/**
*new_dog - new dog struct with copied name, age, and owner
*@name: Pointer to  name of the dog
*@age: Float to age
*@owner: Pointer to owner
*Return: Pointer to  dog_t structure on success, or NULL on failure
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
/* allocating new space memory*/
dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
/* allocating memory for each elemet in the structure of dog*/
new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog->name);
return (NULL);
}

/*init age of dog*/
new_dog->age = age;

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->owner);
free(new_dog);
return (NULL);
}
return (new_dog);
}
