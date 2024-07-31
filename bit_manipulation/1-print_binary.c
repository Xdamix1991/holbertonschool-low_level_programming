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
	int i; /** index */
	char s[32];

	i = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (n > 0)
	{
		s[i] = (n % 2) ? '1' : '0';
		i++;
		n /= 2;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
}

