/**
*print_last_digit - print last number
*@n: The number to print
*@v: The variable to print
*Description: print the last number
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int print_last_digit(int n, v)
{
int v;
v = n % 10;
if (v < 0)
{
v = v * -1;
}
_putchar(v + '0');
return (v);
}
