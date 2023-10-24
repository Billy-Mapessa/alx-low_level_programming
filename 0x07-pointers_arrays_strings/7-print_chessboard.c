#include "main.h"

/**
  * print_chessboard - main function
  *
  * @b:  parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*b)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
	for (y = 0; y < 8; y++)
	_putchar(b[x][y]);
	_putchar('\n');
	}
}

