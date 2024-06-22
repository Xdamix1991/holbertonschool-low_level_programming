/**
*print_to_98 - print last number
*@n: The number to print
*Description: print the last number
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
#include <stdio.h>
#include <unistd.h>
void print_to_98(int n)
{
scanf("%d", &n);
while (n < 99)
{
printf("%d", n);
_putchar(',');
_putchar(' ');
n++;
}
}
