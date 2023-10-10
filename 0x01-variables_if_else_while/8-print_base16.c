#include <stdio.h>

/**
 * main - Entry point. Prints numbers 0-9 and lowercase hexadecimal characters a-f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}

