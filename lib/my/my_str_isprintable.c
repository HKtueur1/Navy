/*
** EPITECH PROJECT, 2020
** str isprintable
** File description:
** project
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int j = 0;

    if (str[i] == '\0') {
        return (1);
    }
    for ( ; str[i] != '\0' ; i++) {
        if (str[i] > 31 && str[i] < 126) {
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
