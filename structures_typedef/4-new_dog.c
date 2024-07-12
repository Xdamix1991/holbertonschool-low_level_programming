/**
*new_dog - new dog struct with copied name, age, and owner
*@name: Pointer to  name of the dog
*@age: Float to age
*@owner: Pointer to owner
*Return: Pointer to  dog_t structure on success, or NULL on failure
**/
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
dog_t *new_dog(char *name, float age, char *owner)
{
/* allocating new space memory*/
{
int n = 0;
int o = 0;
int i;
dog_t *neko;
while (name[n] != '\0')
{
n++;
}
while (owner[o] != '\0')
{
o++;
}
neko = malloc(sizeof(dog_t));
if (neko == NULL)
{
return (NULL);
}
neko->name = malloc(sizeof(char) * (n + 1));
if (neko->name == NULL)
{
    free(neko->name);
    return (NULL);
}
for (i = 0; i < n; i++)
{
neko->name[i] = name[i];
}

neko->age = age;

neko->owner = malloc(sizeof(char) * (o + 1));
if (neko->owner == NULL)
{
    free(neko->owner);
    free(neko);
    return (NULL);
}
for (i = 0; i < o; i++)
{
neko->owner[i] = owner[i];
}
return (neko);
}
}
