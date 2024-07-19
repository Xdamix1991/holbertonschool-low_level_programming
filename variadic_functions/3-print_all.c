#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - Structure to store data type and associated print function.
 * @type: Character representing the data type ('c', 'i', 'f', 's').
 * @p: Function pointer to the function that prints the data of the type.
 */
typedef struct {
    char type; // 'c' for char, 'i' for int, 'f' for float, 's' for string
    void (*p)(va_list args);
} format;

/** another prototypes **/
void print_char(va_list args );
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/** 
 * print_char - Prints a character.
 * @args: Variable argument list containing the character to print.
 * Description: Retrieves a character from the argument list and prints it.
 */


void print_char(va_list args)
{
    char c;
    c = va_arg(args, int);
    printf("%c ,\n", c);
}

/** 
 * print_integer - Prints an integer.
 * @args: Variable argument list containing the integer to print.
 * Description: Retrieves an integer from the argument list and prints it.
 */

void print_integer(va_list args)
{
    int i;
    i = va_arg(args, int);
    printf("%d ,\n", i);
}

/** 
 * print_float - Prints a float.
 * @args: Variable argument list containing the float to print.
 * Description: Retrieves a float from the argument list and prints it.
 */

void print_float(va_list args)
{
    float f;
    f = va_arg(args, double);
    printf("%f ,\n", f);
}

/**
 * print_string - Prints a string.
 * @args: Variable argument list containing the string to print.
 * Description: Retrieves a string from the argument list and prints it.
 * If the string is NULL, "(nil)" is printed.
 */

void print_string(va_list args)
{
char *s;
    s = va_arg(args, char*);
if (s !=NULL)
{
    printf("%s ,\n", s);
}
else
{
    printf("(nil)\n");
}
}

/** 
 * get_format_function - Retrieves the print function corresponding to the type.
 * @type: Character representing the format type ('c', 'i', 'f', 's').
 * Return: Pointer to the print function for the type, or NULL if unknown.
 */
/** get the whrite type to print **/
void (*get_format_function(char type))(va_list)

{
    format types[] ={
    {'c', print_char},
    {'e', print_integer},
    {'i', print_float},
    {'s', print_string},
    {'\0' , NULL}
};
int i = 0;
while(types[i].type != '\0')
{
    if (types[i].type == type)
        return (types[i].p);
		i++;
}
return (NULL);
}

/**
 * print_all - Prints a series of data according to the specified format.
 * @format: String specifying the types of data to print.
 * Description: Iterates over the format string and calls the appropriate print function for each type.
 */
void print_all(const char * const format, ...)
{
const char *ptr;
va_list args;
va_start(args, format);
ptr = format;
while (ptr != NULL && *ptr != '\0')
{
	void (*print_func)(va_list) = get_format_function(*ptr);
	if (print_func != NULL)
	{
		print_func(args);
	}
	ptr++;
}
va_end(args);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 void print_all(const char * const format, ...);
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
