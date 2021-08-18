/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-1-myprintf-timothee.de-boynes
** File description:
** my_showbackslash
*/

#include "my.h"

void octal_form(int nbr)
{
    int i = 1;

    my_putchar('\\');
    while (nbr * i < 100) {
        my_putchar('O');
        i = i * 10;
    }
    my_put_nbr(nbr);
}

int display(unsigned int nb)
{
    unsigned int i = nb;
    unsigned int mod = 0;
    unsigned int mult = 1;
    unsigned int value = 0;
    unsigned int d = 1;

    for (nb = nb ; nb >= 8 ; nb = nb / 8) {
        mult = mult * 8;
    }
    while (mult > 0) {
        mod = (i / mult) % 8;
        value =  value * d + mod;
        d = d * 10;
        mult = mult / 8;
    }
    return (value);
}

void my_showbackslash(char *str)
{
    int i = 0;
    int c = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 32 && str[i] <= 126))
            my_putchar(str[i]);
        else
            octal_form(display((unsigned int)str[i]));
    }
}
