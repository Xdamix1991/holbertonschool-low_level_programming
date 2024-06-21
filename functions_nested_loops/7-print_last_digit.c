/**
*print_last_digit - print last number
*@n: The number to print
*Description: print the last number
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int print_last_digit(int n)
{
return (n % 10);
}
