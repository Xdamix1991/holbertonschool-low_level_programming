/**
*_strspn - function that gets the length of a prefix substring
*Description: up
*@s: pointer
*@accept: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
while (s[i] != '\0')
{
int match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (!match)
{
break;
}
i++;
}
return (i);
}
