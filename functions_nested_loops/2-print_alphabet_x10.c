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
char c;
for (j = 1; j <= 10; j++)
{
for (c = 'a'; c <= 'z'; c++)
{_putchar(c); }
_putchar('\n');
}
}
