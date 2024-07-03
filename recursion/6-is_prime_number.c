/**
*div - function to check if a number is a premier number
*@x: number
*@n: number
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
int div(int n, int x)
{
if (n <= 1)
{
return (0);
}
if (n == x)
{
return (1);
}
if (n % x == 0)
{
return (0);
}
return (div(n, x + 1));
}
/**
*is_prime_number - fuction that gives the premier number  with recursion
*@n: number
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
int is_prime_number(int n)
{
return (div(n, 2));
}
