#ifndef DOG_H
#define DOG_H
/**
*struct dog - Structure representing a dog with its attributes.
*@name: Pointer to a string representing the dog's name.
*@age: Float representing the dog's age.
*@owner: Pointer to a string representing the dog's owner's name.
*
* Description: This structure encapsulates information about a dog,
* including its name, age, and its owner's name.
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* more prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H*/
