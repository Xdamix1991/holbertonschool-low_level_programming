/**
*main - return nothing
*Description: 'putchar'
*Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{putchar(ch);
ch++; }
putchar('\n');
return (0);
}
