/**
*main - return digit numbers
*Description: 'putchar numbers'
*Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
int n;
char ch = 'a';
n = 0;
while (n < 10)
{putchar(n + '0');
n++; }
do {
putchar(ch);
ch++;
} while (ch < 'g');
putchar('\n');
return (0);
}
