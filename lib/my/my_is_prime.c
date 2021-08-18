/*
** EPITECH PROJECT, 2020
** is prime
** File description:
** project
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 0) {
        return (0);
    }
    for ( ;(nb % i) > 0 ; i++) {
        if (i == nb - 1) {
            return (1);
        }
    }
    return (0);
}
