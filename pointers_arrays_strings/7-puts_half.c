/**
*puts_half - print string in half
*Description: reverse string
*@str: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void puts_half(char *str)
{
int x = 0;
int y;
while (str[x] != '\0')
{
x++;
}
y = x / 2;
if (x % 2 == 1)
{
y++;
}
while (y < x)
{
_putchar(str[y]);
y++;
}
_putchar('\n');
}
