/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** project
*/

int cas0(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
}

int  my_compute_power_rec(int nb , int p)
{
    int result;

    result = nb;
    if ( p < 0 || p == 0) {
        cas0(nb , p);
        return (0);
    }
    if (p > 1) {
        result = my_compute_power_rec( nb , p - 1) * result;
    }
    if (result > 2147483647) {
        return (0);
    }
    return (result);
}
