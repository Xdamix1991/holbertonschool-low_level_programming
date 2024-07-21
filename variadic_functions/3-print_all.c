#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - Structure to store data type and associated print function.
 * @type: Character representing the data type ('c', 'i', 'f', 's').
 * @p: Function pointer to the function that prints the data of the type.
 */
typedef struct
{
	char type;
	void (*p)(va_list args);
} format;

/** Function prototypes **/
void print_char(va_list args);
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
	printf("%c", c);
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
	printf("%d", i);
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
	printf("%f", f);
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
	s = va_arg(args, char *);
	printf("%s", s != NULL ? s : "(nil)");
}

/**
 * get_format_function - Retrieves the print function corresponding to the type.
 * @type: Character representing the format type ('c', 'i', 'f', 's').
 * Return: Pointer to the print function for the type, or NULL if unknown.
 */
void (*get_format_function(char type))(va_list)
{
	format types[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};
	int i = 0;
	while (types[i].type != '\0' && types[i].type != type)
	{
		i++;
	}	
	return types[i].p;
}

/**
 * print_all - Prints a series of data according to the specified format.
 * @format: String specifying the types of data to print.
 * Description: Iterates over the format string and calls the appropriate print function for each type.
 */
void print_all(const char *const format, ...)
{
	const char *ptr;
	int cas;
	va_list args;
	va_start(args, format);
	ptr = format;
	cas = 1;
	while (ptr != NULL && *ptr != '\0')
	{
		void (*print_func)(va_list) = get_format_function(*ptr);
		if (print_func != NULL)
		{
			if (!cas)
			{
				printf(", ");
			}
			print_func(args);
			cas = 0;
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}

