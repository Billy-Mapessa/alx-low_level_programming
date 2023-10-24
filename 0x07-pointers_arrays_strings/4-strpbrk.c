#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @x: first parameter
  *
  * @accept: second parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *x, char *accept)
{
	int y, z;

	for (y = 0; x[y] != '\0'; y++)
	{
	for (z = 0; accept[z] != '\0'; z++)
	{
	if (x[y] == accept[z])
	return (x + y);
	}
	}
	return (0);
}

