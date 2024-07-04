/**
*addrecursive - function to check argc & argv
*@s: pointer int
*Return: On success 0.
*On error, -1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int addrecursive(int *S)
{
if (*s == -1)
{
return (0);
}
return (0);
}
return (*s + addrecursive(s + 1);
}

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
int result;
if (argc < 2)
{
printf("0\n");
}
if (!isdigit(argv[i]))
{
printf("Error\n");
return (1);
}
if (i < n)
{i++;
result = addrecursive(argv[i]);
printf("%d\n", result);
}
return (0);
}











