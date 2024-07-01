/**
**_memset - function that fills memory with a constant byte
*Description: constant byte
*@s: pointer
*@b: char
*@n: unsigned integer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
