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
int j;
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
else
{
_putchar('\n');
}
}
