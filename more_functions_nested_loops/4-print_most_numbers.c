/**
*print_most_numbers - print last number
*Description: print the last number
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void print_most_numbers(void)
{
int n;
n = 0;
while (n <= 9)
{
if (n != 2 && n != 4)
{
_putchar(n + '0');
n++;
}
_putchar('\n');
}
}
