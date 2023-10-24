#include "main.h"

/**
  * _strspn - main function
  *
  * @x: First  parameter
  *
  * @accept: Function parameter
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *x, char *accept)
{

	unsigned int _strspn(char *x, char *accept);
	unsigned int i = 0;
	int k;

	while (*x)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*x == accept[k])
	{
	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (i);
	}
	x++;
	}
	return (i);
}


