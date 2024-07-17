/**
*print_numbers - Prints a series of numbers separated by a given string.
*@separator: The string to print between numbers
*@n: The number of integers to print.
*Return: void.
**/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
unsigned int num;
va_list nombres;
va_start(nombres, n);
for (i = 0; i < n; i++)
{
num = va_arg(nombres, unsigned int);
if (separator != NULL && i != 0)
{
printf("%s", separator);
}
printf("%d", num);
}
printf("\n");
va_end(nombres);
}
