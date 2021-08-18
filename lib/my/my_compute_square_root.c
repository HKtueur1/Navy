/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** project
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0) {
        return (0);
    }
    while (i * i != nb) {
        i++;
    }
    return (i);
}
