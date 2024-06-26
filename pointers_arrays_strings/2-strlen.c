/**
*_strlen- lenth of the string
*Description: dispaly lenth of a string
*@s: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++; }
return (x);
}
