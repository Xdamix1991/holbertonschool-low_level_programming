#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - return nothing
*Description: 'printf'
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (n % 10 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, v);
	else if (n % 10 == 0)
	printf("Last digit of %d is %d and is 0\n", n, v);
	else if (n % 10 < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, v);
	return (0);
}
