#include <stdio.h>
#include <stdlib.h>

/** addion **/
int op_add(int a, int b)
{
return (a + b);
}

/** subtraction **/
int op_sub(int a, int b)
{
return (a - b);
}

/** multiplication **/
int op_mul(int a, int b)
{
return (a * b);
}

/** division **/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/** modulo **/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

