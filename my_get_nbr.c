/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_get_nbr.c
*/

#include <stdio.h>

int my_get_nbr(char *str)
{
    int nb = 0;
    int i = 0;
    int j = 0;

    while (str[i] != '\0') { 
        if (str[i] >= '0' && str[i] <= '9') {
            j = str[i] - 48;
            nb = nb * 10 + j;
            i++;
        } else {
            i++; 
        }
    }
    if (str[0] == '-')
        nb = -nb;
    return nb;
}
