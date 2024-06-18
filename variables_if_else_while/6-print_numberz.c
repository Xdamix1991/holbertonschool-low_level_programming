/**
*main - return digit numbers
*Description: 'putchar numbers'
*Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
int n;
n = 0;
while (n < 10)
{putchar(n + '0');
n++; }
putchar('\n');
return (0);
}
