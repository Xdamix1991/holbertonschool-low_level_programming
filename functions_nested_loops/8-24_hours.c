/**
*jack_bauer - print last number
*Description: print the time
*Return: Always 0 (Success).
*On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
void jack_bauer(void)
{
int H, M;
H = 0;
while (H < 24)
{
M = 0;
do {
_putchar((H / 10) + '0');
_putchar((H % 10) + '0');
_putchar(58);
_putchar((M / 10) + '0');
_putchar((M % 10) + '0');
m++; }
_puchar('\n');
}
H++;
}
