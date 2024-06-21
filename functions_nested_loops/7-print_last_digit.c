/**
*print_last_digit - print last number
*@n: The number to print
*Description: print the last number
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n * -1;
}
_putchar(n + '0');
return (n);
}
