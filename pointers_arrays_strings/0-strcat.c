/**
*_strcat - add string to another
*Description: up
*@dest: pointer
*@src: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_strcat(char *dest, char *src)
{
int x = 0;
int y;
while (dest[x] != '\0')
{
x++;
}
for (y = 0; src[y] != '\0'; y++)
{
dest[x] = src[y];
x++;
}
dest[x] = '\0';
return (dest);
}
