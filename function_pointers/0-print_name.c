#include <stdio.h>
/**
*print_name - Prints a name using a specified processing function.
*@name: Pointer to a string containing the name to print.
*@f: Pointer to a function that takes a char * argument and returns void.
*This function checks if the pointers @f and @name are not NULL.
*it calls the function pointed by @f with @name as an argument.
**/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
{
f(name);
}
}
