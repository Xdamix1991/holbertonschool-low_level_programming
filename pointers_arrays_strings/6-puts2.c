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
int x;
x = 0;
if (x % 2 == 0)
{
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
}
