/*
** EPITECH PROJECT, 2020
** my_unbinary
** File description:
** int to binary
*/

#include "stdlib.h"

void my_putchar(char c);

unsigned int my_unbinary(unsigned int nb)
{
    if (nb == 0) {
        my_putchar(0);
    } else {
        (nb >= 1);
        my_putchar((nb % 2 + 10 * my_unbinary(nb / 2))+38);
    }
}
