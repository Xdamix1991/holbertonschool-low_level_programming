/**
*malloc_checked - function function that allocates memory using malloc
*@b: size of integer
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (s);
}
