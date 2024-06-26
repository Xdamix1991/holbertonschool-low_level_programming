/**
*rev_string - print string in reverse
*Description: reverse string
*@s: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void rev_string(char *s)
{
int x = 0;
int y;
int z;
char temp;
{
while (s[x] != '\0')
{
x++;
}
y = x - 1;
z = 0;
while (y > z)
{
temp = s[z];
s[z] = s[y];
s[y] = temp;
z++;
y--;
}
}
}
