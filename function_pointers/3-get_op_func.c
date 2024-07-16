/**
*get_op_func - function pointer for a given arithmetic operator
*@s: The arithmetic operator as a string
*Return: pointer
*If successful, returns a pointer to the function implementing the arithmetic
*operation corresponding to @s. If @s is not a recognized operator, prints
*an error message and terminates the program with exit status 99.
*/
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
printf("Error\n");
exit(99);
}

