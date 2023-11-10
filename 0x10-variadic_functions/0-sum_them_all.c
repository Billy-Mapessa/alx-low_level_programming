#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@x: first parameter
*
*Return: 0 if x is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int x, ...)
{

	va_list li;
	int sum = 0;
	unsigned int i;

	va_start(li, x);

	if (x != 0)
	{
		for (i = 0; i < x; i++)
	sum += va_arg(li, int);
	}

	va_end(li);
	return (sum);
}
