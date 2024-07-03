/**
*_pow_recursion - fuction that gives the power of x by y with recursion
*@x: number
*@y: number
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
**/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
