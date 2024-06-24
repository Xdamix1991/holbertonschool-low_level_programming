/**
*main - print digit number of time
*Description: print char
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
#include <stdio.h>
int main(void)
{
int n;
int i;
n = 1;
for (i = 1; i <= 100; i++)
{
int fizz = 3 * n;
int buzz = 5 * n;
int fizzbuzz = 15 * n;
if (i != fizz && i != buzz && i != fizzbuzz)
{
printf("%d ", i);
}
else
{
if (i == fizz)
{
printf("fizz ");
}
if (i == buzz)
{
printf("buzz ");
}
if (i == fizzbuzz)
{
printf("fizzbuzz ");
}
}
n++; }
printf("\n");
return (0);
}
