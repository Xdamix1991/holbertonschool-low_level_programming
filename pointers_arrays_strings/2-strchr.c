/**
**_strchr - function that fills memory with a constant byte
*Description: constant byte
*@s: pointer
*@c: char
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
if (c == '\0')
{
return (&s[i]);
}
return (0);
}
