/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_isneg.c
*/

#include "my.h"

void my_putchar(char c);

int my_isneg(int  n)
{
    if (n < 0) {
        my_putchar('N');
        my_putchar('\n');
    }
    else if (n > 0 || n == 0) {
        my_putchar('P');
        my_putchar('\n');
    }
}