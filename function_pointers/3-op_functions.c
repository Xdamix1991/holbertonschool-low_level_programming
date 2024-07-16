#include <stdio.h>
#include <stdlib.h>
/**
*op_add - Adds two integers
*@a: The first integer
*@b: The second integer
*Return: The sum of a and b
*addion **/
int op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub - substract two integers
*@a: The first integer
*@b: The second integer
*Return: The div of a and b
*subtraction **/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_mul - multiplies two integers
*@a: The first integer
*@b: The second integer
*Return: The mul of a and b
*multiplication **/
int op_mul(int a, int b)
{
return (a * b);
}
/**
*op_div - Adds two integers
*@a: The first integer
*@b: The second integer
*Return: The div of a and b
*division **/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
*op_mod - Adds two integers
*@a: The first integer
*@b: The second integer
*Return: The modulo of a / b
*modulo **/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
