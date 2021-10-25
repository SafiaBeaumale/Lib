/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_print_alpha.c
*/

#include "my.h"

int my_print_alpha(void)
{
	for (int i = 97; i != 123; i ++) {
		my_putchar(i);
	}
	my_putchar('\n');
}