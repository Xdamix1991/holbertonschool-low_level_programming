/**
*print_triangle - print char number of time
*Description: print triangle
*@size: rectangle to print
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void print_triangle(int size)
{
if (size > 0)
{
int i;
for (i = 0; i < size; i++)
{
int j;
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
