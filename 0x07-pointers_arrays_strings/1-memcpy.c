#include "main.h"

/**
 * _memcpy - main function prototype
 *
 *@src: Source parameter
 *
 *@dest: Destination parameter
 *
 *@y: Function parameter
 *
 *Return: Copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int y)
{
	unsigned int x;
	
	for (x = 0; x < y; x++)
	{
	dest[x] = src[x];			
	}
	return (dest);
}

