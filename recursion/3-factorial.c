/**
*factorial - writes the character c to stdout
*@n: number
*
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
#include "main.h"
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
