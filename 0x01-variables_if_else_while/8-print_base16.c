#include <stdio.h>

int main() {
    char letter;

    for (letter = '0'; letter <= '9'; letter++) {
        putchar(letter);
    }

    for (letter = 'a'; letter <= 'f'; letter++) {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
