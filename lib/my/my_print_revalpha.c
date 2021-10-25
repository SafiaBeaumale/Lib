/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_print_revalpha.c
*/

#include "my.h"

int my_print_revalpha(void)
{
	for (int i = 122; i != 96; i--) {
		my_putchar(i);
	}
    my_putchar('\n');
}