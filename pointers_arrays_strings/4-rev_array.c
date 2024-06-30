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
int j = 0;
int temp;
while (i < n)
{
i++;
}
while (j < n)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j++;
i--;
}
}
