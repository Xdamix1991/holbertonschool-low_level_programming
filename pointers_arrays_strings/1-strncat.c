/**
*_strncat - add string to another
*Description: up
*@dest: pointer
*@src: pointer
*@n: number of array
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y;
while (dest[x] != '\0')
{
x++;
}
for (y = 0; src[y] != '\0' && y < n; y++)
{
dest[x] = src[y];
x++;
}
dest[x] = '\0';
return (dest);
}
