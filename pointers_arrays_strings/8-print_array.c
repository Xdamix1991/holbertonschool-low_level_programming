/**
*print_array - print the value of an array
*Description: up
*@a: pointer
*@n: array value
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include <stdio.h>
#include "main.h"
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != n - 1)
{
printf(", ");
}
}
printf("\n");
}
