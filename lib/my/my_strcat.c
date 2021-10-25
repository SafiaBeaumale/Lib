/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (dest[i])
        i++;
    while (src[j])
        dest[i++] = src[j++];
    return (dest);
}