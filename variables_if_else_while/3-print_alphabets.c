/*
*main - return nothing
*Description : 'print alphabets"
*Return: Always 0 (success)
*/
#include <stdio.h>
int main(void)
{
char lch = 'a';
char uch = 'A';
while (lch <= 'z')
{putchar (lch);
lch++; }
do {
putchar (uch);
uch++;
} while (uch <= 'Z');
putchar ('\n');
return (0);
}

