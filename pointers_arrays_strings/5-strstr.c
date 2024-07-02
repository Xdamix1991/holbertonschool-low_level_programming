/**
**_strstr - function  that locates a substring.
*Description: up
*@haystack: pointer
*@needle: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (*needle == '\0')
{
return (haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
{
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (0);
}
