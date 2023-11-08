#include "3-calc.h"

/**
*op_add - Returns the sum of two numbers
*@a:the first number
*@b:the second number
*
*Return:The sum of a and b
*/

int op_add(int a, int b)
{
return (a + b);
}


/**
*op_sub - Returns the substraction of two numbers
*@a:The first number
*@b:The second number
*
*Return: The Difference of a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - Returns the multiplication of two numbers
*@x:The first number
*@y: The second number
*
*Return: The multiplication of x and y
*/
int op_mul(int x, int y)
{
return (x * y);
}


/**
*op_div - Returns the division of two numbers.
*@x: The first number.
*@y: The second number.
*
*Return: The quotient of x and y.
*/
int op_div(int x, int y)
{
return (x / y);
}

/**
*op_mod - Returns the remainder of the division of two numbers.
*@a: The first number.
*@b: The second number.
*
*Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
