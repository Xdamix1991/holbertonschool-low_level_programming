/**
*print_alphabet_x10 - Print the alphabetx10
*Description: This function prints the alphabet in lowercase 10 times
*Return: void
*/
#include "main.h"
void print_alphabet_x10(void)
{
int j;
char c;
for (j = 0; j < 10; j++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c); }
_putchar('\n');
}
}
