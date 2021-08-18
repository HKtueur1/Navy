/*
** EPITECH PROJECT, 2020
** str_isnum
** File description:
** project
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int j = 0;

    if (str[i] == '\0') {
        return (1);
    }
    for ( ; str[i] != '\0' ; i++) {
        if (str[i] > 47 && str[i] < 58) {
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
