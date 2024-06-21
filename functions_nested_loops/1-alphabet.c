/**
*print_alphabet - Print the alphabet
*Description: This function prints the alphabet in lowercase.
*Return: void
*/
#include <unistd.h>
#include "main.h"
void print_alphabet(void)
{
char c  = 'a';
while (c <= 'z')
{_putchar(c);
c++; }
_putchar('\n');
}
