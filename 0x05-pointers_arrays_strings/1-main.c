#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int x;
    int y;

    x = 70;
    y = 32;
    printf("x=%d, y=%d\n", x, y);
    swap_int(&x, &y);
    printf("x=%d, y=%d\n", x, y);
    return (0);
}

