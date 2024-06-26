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
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
