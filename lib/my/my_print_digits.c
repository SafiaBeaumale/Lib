/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_print_digits.c
*/

#include "my.h"

int my_print_digits(void)
{
    int num;
    num = '0';
    
    while (num <='9')   {
        my_putchar(num);
        num = num+1;
    }
    return (0);
}