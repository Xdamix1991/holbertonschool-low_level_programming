/**
*more_numbers - print numbers
*Description: function to print the  numbers
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void more_numbers(void)
{
int i;
for (i = 0; i <= 10; i++)
{
int n;
for (n = 0; n <= 14; n++)
{
if (n > 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
i++;
}
