/**
*main - return nothin
*Description: 'print alphabet'
*Return: Always 0 (Success)
*/
#include <unistd.h>
#include "main.h"
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{_putchar(ch);
ch++; }
_putchar('\n');
return (0);
}
