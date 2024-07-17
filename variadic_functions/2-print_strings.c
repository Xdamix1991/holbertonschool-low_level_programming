/**
*print_strings - Prints a series of strings separated by a given string.
*@separator: The string to print between strings
*@n: The number of integers to print.
*Return: void.
**/
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list nombres;
va_start(nombres, n);
for (i = 0; i < n; i++)
{
str = va_arg(nombres, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(nombres);
}
