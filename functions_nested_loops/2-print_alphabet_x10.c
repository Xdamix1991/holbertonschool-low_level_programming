/**
*print_alphabet - Print the alphabet
*Description: This function prints the alphabet in lowercase.
*Return: void
*/
#include <unistd.h>
#include "main.h"
void print_alphabet(void)
{
int j;
char c = 'a';
for (j = 0; j <= 10; j++)
{
while (c <= 'z')
{_putchar(c);
c++;
}
_putchar('\n');
c = 'a';
}
}
