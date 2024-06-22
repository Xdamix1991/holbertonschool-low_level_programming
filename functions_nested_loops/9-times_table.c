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
B = 0;
while (B < 10)
{
C = A *B;
if (B != 0)
_putchar(',');
_putchar(' ');
}
if (C <= 9 && B != 0)
_putchar(' ');
if (B > 9)
_putchar((C / 10) + '0');
_putchar((C % 10) + '0');
B++;
}
_putchar('\n');
A++;
}
