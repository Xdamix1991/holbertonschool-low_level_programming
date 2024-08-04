#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - converts a number to binary
 * @n: number to concert
 * Return: void
 **/

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zero;

	mask = 1UL << (sizeof(n) * 8 - 1);
	leading_zero = 1;
	while (mask > 0)

		if ((n & mask) == 0 && leading_zero)
		{
			mask >>= 1;
		}
		else
		{
			putchar((n & mask) ? '1' : '0');
			leading_zero = 0;
			mask >>= 1;
		}

if (leading_zero)
{
	putchar('0'); 
}
}

