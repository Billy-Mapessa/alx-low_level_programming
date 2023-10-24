#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
char *_memset(char *x, char y, unsigned int z);
char *_memcpy(char *dest, char *src, unsigned int z);
char *_strchr(char *x, char c);
unsigned int _strspn(char *x, char *accept);
char *_strpbrk(char *x, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **x, char *to);
#endif

