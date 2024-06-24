/**
*_isdigit - check for digit
*Description: function tou check digit
*@c: The character to print
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
