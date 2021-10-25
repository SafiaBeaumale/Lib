/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int i  = *a;
    *a = *b;
    *b = i;
}