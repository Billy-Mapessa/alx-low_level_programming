#include "main.h"

/**
  * _strchr - main function
  *
  * @x: first  parameter
  *
  * @y: second parameter
  *
  * Return: Always o.
  */
char *_strchr(char *x, char y)
{
	int k;

	for (k = 0; x[k] >= '\0'; k++)
	{
	if (x[k] == y)
	return (x + k);
	}
	return (0);
}


