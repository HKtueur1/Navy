/*
** EPITECH PROJECT, 2020
** getnbr
** File description:
** project
*/

int re(char const *str, int i, int nbr, long long value)
{
    for ( ;str[i] >= '0' && str[i] <= '9';i++ ) {
        nbr = str[i] - 48;
        if (str[i + 1] >= '0' && str[i + 1] <= '9') {
            value = (value + nbr) * (10);
        }
        else {
            value = value + nbr;
        }
    }
    if (value > 2147483647 || value < -2147483647) {
        return (0);
    }
    return (value);
}

int my_getnbr(char const  *str)
{
    int nbr = 0;
    int i = 0;
    int n = 0;
    long long value = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            n++;
        }
        i = i + 1;
    }
    value = re(str, i, nbr, value);
    while (n > 0) {
        value = value * (-1);
        n = n - 1;
    }
    return (value);
}