/**
*print_numbers - print numbers
*Description: function to print the  numbers
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void print_numbers(void)
{
int c;
c = 0;
while (c <= 9)
{
_putchar(c + '0');
c++;
}
{
_putchar('\n');
}
}
