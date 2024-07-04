/**
*main - function to check argc & argv
*@argc: number
*@argv: pointer char
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char *argv[])
{
char *nom = argv[0];
while (*nom != '\0')
{
_putchar(*nom);
nom++;
}
_putchar('\n');
return (0);
}
