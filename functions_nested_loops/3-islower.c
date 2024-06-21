/**
* _islower - checks lower cases
* @c: The character to print
*
* Return: Always 0 (Success).
* On error, -1 is returned, and errno is set appropriately.
*/
#include "main.h"
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else 
return(0);
}
