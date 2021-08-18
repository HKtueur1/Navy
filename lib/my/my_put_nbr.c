/*
** EPITECH PROJECT, 2020
** put nbr
** File description:
** project
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

void my_put_nbr(int nb)
{
    int i = nb;
    int mod = 0;
    int mult = 1;

    if (nb < 0) {
        nb = - nb;
        i = - i;
        my_putchar('-');
    }
    for (nb = nb ; nb > 10 ; nb = nb / 10) {
        mult = mult * 10;
    }
    while (mult > 0) {
        mod = (i / mult) % 10;
        my_putchar(mod + 48);
        mult = mult / 10;
    }
}
