/*
** EPITECH PROJECT, 2020
** my str islower
** File description:
** project
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int j = 0;

    if (str[i] == '\0') {
        return (1);
    }
    for ( ; str[i] != '\0' ; i++) {
        if (str[i] > 96 && str[i] < 123) {
            j++;
        }
        else {
            return (0);
        }
    }
    if (j > 0) {
        return (1);
    }
}
