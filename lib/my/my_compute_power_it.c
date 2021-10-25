/*
** EPITECH PROJECT, 2021
** my_compute_power_it.c
** File description:
** puissance int
*/

int my_compute_power_it(int nb, int p)
{
    int response = 1;
    
   if (p == 0)
        return 1;

   if (p < 0)
       return 0;

    while (p >  0) {
       response =  response * nb;
       p--;
    }
    return response;
}
