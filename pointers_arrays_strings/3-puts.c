/**
*_puts - lenth of the string
*Description: dispaly lenth of a string
*@str: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void _puts(char *str)
{
int x = 0;
while (str[x] != '\0')
{
_putchar('x');
}
_putchar('\n');
}
