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
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
