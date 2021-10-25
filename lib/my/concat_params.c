/*
** EPITECH PROJECT, 2021
** my
** File description:
** concat_params.c
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int size = 0;
    char *dest = 0;

    if (argc < 0 || argv == NULL)
        return NULL;
    while(i < argc) {
        size = size + my_strlen(argv[i]) + 2;
        i++;
    }
    dest = malloc(sizeof(char) * (size + 1));
    i = 0;
    while (i < argc) {
        dest = my_strcat(dest, argv[i]);
        i++;
    if (i != argc)
        dest = my_strcat(dest, "\n");
    }
    return dest;
}