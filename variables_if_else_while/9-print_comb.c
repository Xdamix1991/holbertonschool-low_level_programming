/**
*main - return nothing
*Description: 'printf'
*Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
int n;
n = 0;
while (n < 10)
{
putchar(n + '0');
if (n < 9)
{putchar(32);
putchar(44); }
n++;
}
if (n == 10)
{putchar(36);
}
return (0);
}
