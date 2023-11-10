#include "variadic_functions.h"

/**
* print_strings - prints strings
*@separator: separator
*@x: number of strings
*
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int x, ...)
{

va_list li;
unsigned int i;
char *str;

va_start(li, x);

for (i = 0; i < x; i++)
{
str = va_arg(li, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (x - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(li);
}
