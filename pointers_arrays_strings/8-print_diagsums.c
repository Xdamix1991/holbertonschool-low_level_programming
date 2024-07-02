/**
*print_diagsums - function that prints the sum of diagonal
*Description: up
*@a: pointer
*@size: integer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum1 += a[i * size + j];
}
if (i + j == size - 1)
{
sum2 += a[i * size + j];
}
}
}
printf("%d, %d\n", sum1, sum2);
}
