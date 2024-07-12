/**
*print_dog -  checks the  variables in  struct dog
*@d: Pointer to  struct dog
**/
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

/* checks et print the name */
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

/* checks et print the age, age cant be less than 0 */
printf("Age: %f\n", d->age);

/* checks et print the owner */
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
