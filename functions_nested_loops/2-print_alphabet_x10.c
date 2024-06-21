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
char c = 'a';
while (j <= 10)
{
while (c <= 'z')
{_putchar(c);
c++; }
_putchar('\n');
}
}
