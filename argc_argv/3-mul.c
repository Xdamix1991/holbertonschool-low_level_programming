/**
*main - function to check argc & argv
*@argc: number
*@argv: pointer char
*Return: On success 1.
*On error, 1 is returned, and errno is set appropriately.
**/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc < 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
