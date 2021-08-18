/*
** EPITECH PROJECT, 2020
** unoctal
** File description:
** unsigned octal
*/

#include "stdlib.h"

void my_putchar(char c);

void my_unoctal(unsigned int nb)
{
    unsigned int i = nb;
    unsigned int mod = 0;
    unsigned int mult = 1;

    for (nb = nb ; nb >= 8 ; nb = nb / 8) {
        mult = mult * 8;
    }
    while (mult > 0) {
        mod = (i / mult) % 8;
        my_putchar(mod + 48);
        mult = mult / 8;
    }
}
