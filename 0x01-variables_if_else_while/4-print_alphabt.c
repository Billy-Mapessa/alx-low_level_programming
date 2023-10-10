#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main() {
    char letter = 'a'; // Start with the first lowercase letter 'a'

    while (letter <= 'z') {
        if (letter != 'e' && letter != 'q') {
            putchar(letter); // Print the letter if it's not 'e' or 'q'
        }

        letter++; // Move to the next letter
    }

    putchar('\n'); // Print a newline character after all letters
    return 0;
}
