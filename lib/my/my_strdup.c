/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest;
    int size = my_strlen(src);

    if (src == NULL)
        return NULL;
    dest = malloc(sizeof(char) * (size + 1));

    if (dest == NULL)
        return NULL;
    while(src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}