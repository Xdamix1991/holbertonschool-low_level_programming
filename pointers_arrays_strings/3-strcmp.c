/**
*_strcmp - compare strings
*Description: function that compares strings
*@s1: pointer
*@s2: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
{
i++;
j++;
}
if (s1[i] != s2[j])
{
return (s1[i] - s2[j]);
}
return (0);
}
