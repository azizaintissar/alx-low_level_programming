#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
    int i, ch;

    for (i = 0; i < 10; i++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}

