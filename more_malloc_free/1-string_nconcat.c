/**
*string_nconcat - function that returns a pointer to a two dimensional array
*@s1: string one
*@s2: string two
*@n: size of string
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
char *dest;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
n = len2;
dest = malloc((len1 + n + 1) * sizeof(char));
if (dest == NULL)
{
return (NULL);
}
for (len1 = 0; s1[len1] != '\0'; len1++)
{
dest[len1] = s1[len1];
}
for (len2 = 0; s2[len2] != '\0' && len2 < n; len2++)
{
dest[len1] = s2[len2];
len1++;
}
dest[len1] = '\0';
return (dest);
}
