/**
**_memcpy - function that fills memory with a constant byte
*Description: constant byte
*@dest: pointer
*@src: char
*@n: unsigned integer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
