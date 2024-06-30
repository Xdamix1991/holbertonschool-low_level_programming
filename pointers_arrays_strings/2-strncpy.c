/**
*_strncpy - copie strings
*Description: function that copies strings
*@dest: pointer
*@src: pointer
*@n: number of array
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j;
while (src[i] != '\0')
while (dest[i] != '\0')
{
dest[i] = src[j];
for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
dest[i] = '\0';
i++;
}
}
return (dest);
}
