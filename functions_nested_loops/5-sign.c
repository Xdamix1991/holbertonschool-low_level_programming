/**
*print_sign - print sign of a number
*@n: The number to print
*Description: print the sign
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int print_sign(int n)
{
if (n > 1)
{_putchar('+');
return (1);
}
else if (n < 0)
{_putchar('-');
return (-1);
}
else
{_putchar('0');
return (0);
}
}
