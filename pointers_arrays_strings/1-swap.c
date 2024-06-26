/**
*swap_int - swap the value
*Description: swap value
*@a: pointer
*@b: pointer
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void swap_int(int *a, int *b)
{
int swap;
{
swap = *a;
*a = *b;
}
*b = swap;
}
