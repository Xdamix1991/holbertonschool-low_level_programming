/**
*print_rev- print string in reverse
*Description: reverse string
*@s: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void print_rev(char *s)
{
int x = 0;
if (s[x] == '\0')
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
