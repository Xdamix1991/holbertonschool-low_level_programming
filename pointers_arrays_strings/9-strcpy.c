/**
*_strcpy - print the value of an array
*Description: up
*@dest: pointer
*@src: array value
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_strcpy(char *dest, char *src)
{
int x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';
return (dest);
}
