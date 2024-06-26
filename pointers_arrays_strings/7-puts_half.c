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
if (x % 2 == 0)
{
for (y = x / 2; str[y] != '\0'; y++)
{
_putchar(str[y]);
}
}
else
{
_putchar(str[x - 1]);
}
_putchar('\n');
}
