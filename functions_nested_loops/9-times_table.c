/**
*times_table - print table of nine
*Description: print the table
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void times_table(void)
{
int A, B, C;
A = 0;
while (A < 10)
{
C = A *B;
B = 0;
while (B < 10)
{
_putchar ((C) + '0');
_putchar(',');
_putchar(' ');
B++;
_putchar('\n');
}
A++;
}
}
