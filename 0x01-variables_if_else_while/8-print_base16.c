#include <stdio.h>

/**
 * main - Entry point. Prints numbers 0-9 and lowercase hexadecimal characters a-f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print numbers 0-9 */
	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}

	/* Print lowercase hexadecimal characters a-f */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}

