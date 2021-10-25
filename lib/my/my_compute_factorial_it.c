/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it.c
** File description:
** factint
*/

int my_compute_factorial_it(int nb)
{
    int i;

    if (nb == 0)
        return 1;
    
    if (nb < 0)
        return 0;
 
    for (i = nb - 1; i > 0; i--) {
        nb = nb * i;
    }
    return nb;
}
