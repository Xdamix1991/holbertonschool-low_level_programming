/**
*main - The main function of the program
*@argc: The number of command-line arguments
*@argv: An array of strings containing the arguments
*
* Return: 0 on success, different values on error
**/
#include <stdio.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{
int a;
int b;
int (*math)(int, int);
int result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
math = get_op_func(argv[2]);
{
if (math == NULL)
{
printf("Error\n");
exit(99);
}
result = math(a, b);
printf("%d\n", result);
}
return (0);
}
