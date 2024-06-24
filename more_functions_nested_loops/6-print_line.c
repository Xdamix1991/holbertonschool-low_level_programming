/**
*print_line - print char number of time
*Description: print char
*@n: print line
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void print_line(int n)
{
n = 0;
if (n > 0)
{
_putchar('_' + '0');
_putchar('\n');
}
else
{
_putchar('\n');
}
}
