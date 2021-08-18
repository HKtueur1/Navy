/*
** EPITECH PROJECT, 2020
** unsignednbr
** File description:
** libmy
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

void my_unsignednbr(unsigned int nb)
{
    unsigned int i = nb;
    unsigned int mod = 0;
    unsigned int mult = 1;

    for (nb = nb ; nb > 10 ; nb = nb / 10) {
        mult = mult * 10;
    }
    while (mult > 0) {
        mod = (i / mult) % 10;
        my_putchar(mod + 48);
        mult = mult / 10;
    }
}
