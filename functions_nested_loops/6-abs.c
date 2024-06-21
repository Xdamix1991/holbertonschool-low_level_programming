/**
*_abs - print abs of a number
*@n: The number to print
*Description: print th
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (n * -1);
else
return (0);
}
