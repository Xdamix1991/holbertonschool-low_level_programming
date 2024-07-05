/**
*main - function to check argc & argv
*@argc: number of arguments
*@argv: pointer char
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
int main(int argc, char *argv[])
{
int i;
int result = 0;
char *tmp;
if (argc < 2)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
tmp = argv[i];
while (*tmp)
{
if (!isdigit(*tmp))
{
printf("Error\n");
return (1);
}
tmp++;
}
result += atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
