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
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0  && i % 5 == 0)
{
printf("FizzBuzz ");
}
if (i % 3 == 0)
{
printf("Fizz ");
}
if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
