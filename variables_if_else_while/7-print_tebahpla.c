/**
*main - return digit numbers
*Description: 'printf numbers'
*Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
char lch = 'z';
while (lch >= 'a')
{putchar(lch);
lch--; }
putchar('\n');
return (0);
}
