/**
*_isalpha - checks lower cases up cases
*@c: The character to print
*Description: check lower or up cases
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
