/*
** EPITECH PROJECT, 2020
** my_uncaphexa
** File description:
** dec to hexa
*/

#include "my.h"

unsigned int my_uncaphexa(unsigned int nb)
{
    if (nb >= 16)
        my_unhexa(nb/16);
    if (nb%16 < 10) {
        my_putchar((nb%16) + 48);
    } else {
        my_putchar(65 + (nb%16 -10));
    }
}
