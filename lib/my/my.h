/*
** EPITECH PROJECT, 2021
** my
** File description:
** my.h
*/

#ifndef my_h
    #define my_h

int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);
int my_isneg(int n);
int my_print_comb(void);
int my_print_comb2(void);
int my_putnbr(int nb);
int my_print_combn(int n);
void my_putchar(char c);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_evil_str(char *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int count_valid_queens_placements(int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_putnbr_base(int nbr , char const *base);
int my_getnbr_base(char const *str , char const *base);
int my_showstr(char const *str);
int my_showmem(char const *str , int size);
char *my_strcat(char *dest, char *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
char *concat_params(int argc, char **argv);
int my_show_word_array(char * const *tab);
char ** my_str_to_word_array(char const *str);
char *convert_base(char const *nbr , char const *base_from , char const *base_to);
struct info_param *my_params_to_array(int ac , char **av);
int my_show_params_array(struct info_param const *par);
int get_color(unsigned char red , unsigned char green , unsigned char blue);
int swap_endian_color(int color);
int my_sort_word_array(char **tab);
int my_advanced_sort_word_array(char **tab , int(*cmp)(char const *, char const *));
int cat(int ac, char *av[]);

#endif