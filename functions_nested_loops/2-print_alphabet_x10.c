/**
*print_alphabet_x10 - Print the alphabet
*Description: This function prints the alphabet in lowercase.
*Return: void
*/
#include <unistd.h>
#include "main.h"
void print_alphabet_x10(void)
{
int j;
j = 0;
while (j <= 10)
{
char c = 'a';
while (c <= 'z')
{_putchar(c);
c++; }
_putchar('\n');
}
}
