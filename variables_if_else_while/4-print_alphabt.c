/**
*main - Prints alphabets from 'a' to 'z', except 'q' and 'e'
*Description: 'This function uses a for loop to iterate through the alphabet'
*Return: Always 0 (success)
*/
#include <stdio.h>
int main(void)
{
char lch = 'a';
for (lch = 'a'; lch <= 'z'; lch++)
{
if (lch == 'q' || lch == 'e')
continue;
putchar(lch);
}
putchar('\n');
return (0);
}
