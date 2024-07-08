/**
*_strdup - function to creat array
*@str: string pointer
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
int i = 0;
int j;
char *dest;
if (str == NULL)
{
return (NULL);
}
while (str[i] != 0)
{
i++;
}
dest = malloc(sizeof(char) * (i + 1));
if (dest == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
dest[j] = str[j];
}
return (dest);
}
