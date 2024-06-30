/**
*reverse_array - copie strings
*Description: function that copies strings
*@a: pointer
*@n: variable
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void reverse_array(int *a, int n)
{
int i = 0;
int j;
int r;
int temp;
while (i < n)
{
i++;
}
j = n - 1;
r = 0;
while (r < j)
{
temp = a[r];
a[r] = a[j];
a[j] = temp;
r++;
j--;
}
}
