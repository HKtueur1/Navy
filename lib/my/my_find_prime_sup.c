/*
** EPITECH PROJECT, 2020
** find prime sup
** File description:
** project
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1) {
        nb++;
    }
    return (nb);
}
