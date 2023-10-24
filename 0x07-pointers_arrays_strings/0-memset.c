
#include "main.h"

/**
 *_memset - main function of the prototype
 *
 *@x: The value used to fill the memory
 *
 *@y: Function paramater
 *
 *@z: Function parameter
 *
 *Return: y
 */
char *_memset(char *y, char x, unsigned int z)
{
	unsigned int a;

	for (a = 0; a < z; a++)
	y[a] = x;
	return (y);
}

