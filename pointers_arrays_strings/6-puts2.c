/**
*puts2 - print string in reverse
*Description: reverse string
*@str: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void puts2(char *str)
{
int x = 0;
int y;
while (*str != '\0')
{
y = x % 2;
if (y == 0)
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
}
