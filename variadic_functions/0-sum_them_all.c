/**
*sum_them_all - Sums a variable number of unsigned integers.
*@n: The number of arguments.
* This function accepts a variable number of unsigned integer arguments
* and returns their sum. If no arguments are provided, the function
* returns 0.
* Return: The sum of the arguments, or 0 if no arguments are provided.
**/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list nombres;
unsigned int  sum = 0;
va_start(nombres, n);

if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(nombres, unsigned int);
}
va_end(nombres);
return (sum);
}
