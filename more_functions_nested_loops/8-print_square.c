/**
*print_square - print char number of time
*Description: print char
*@size: print line
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void print_square(int size)
{
if (size > 0)
{
int i;
{
for (i = 0; i < size; i++)
{
int j;
for (j = 1; i < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
