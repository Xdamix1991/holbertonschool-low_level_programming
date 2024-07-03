/**
*racine - function to do the math sqr
*@x: number
*@n: number
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
int racine(int n, int x)
{
if (n * n == x)
return (n);
if (n * n > x)
return (-1);
return (racine(n + 1, x));
}

/**
*_sqrt_recursion - fuction that gives the power of x by y with recursion
*@n: number
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
int _sqrt_recursion(int n)
{
return (racine(1, n));
}
