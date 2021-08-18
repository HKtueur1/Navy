/*
** EPITECH PROJECT, 2020
** my_unhexa
** File description:
** dec to exa
*/

#include "my.h"

unsigned int my_unhexa(unsigned int nb)
{
    if (nb >= 16)
        my_unhexa(nb/16);
    if (nb%16 < 10) {
        my_putchar((nb%16) + 48);
    } else {
        my_putchar(97 + (nb%16 -10));
    }
}
