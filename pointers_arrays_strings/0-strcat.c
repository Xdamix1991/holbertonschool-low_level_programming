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
while (dest[x] != '\0')
{
x++;
}
int y = 0;
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
