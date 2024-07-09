/**
*str_concat - function to creat a new string by additionning two strings
*@s1: string pointer
*@s2: string pointer
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *str_concat(char *s1, char *s2)
{
char *result;
int k = 0;
int i = 0;
int j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
result = malloc(sizeof(char) * (i + j + 1));
if (result == NULL)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
result[k] = s1[k];
}
for (k = 0; k < j; k++)
{
result[i + k] = s2[k];
}
result[i + j] = '\0';
return (result);
}
