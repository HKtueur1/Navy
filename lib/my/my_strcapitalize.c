/*
** EPITECH PROJECT, 2020
** strcapitalize
** File description:
** project
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int i = 0;

    str = my_strlowcase(str);
    if (str[i] > 96 && str[i] < 123) {
        str[0] = str[0] - 32;
    }
    for ( ; str[i] != '\0' ; i++) {
        if (str[i - 1] > 31 && str[i - 1] < 48) {
            if (str[i] > 96 && str[i] < 123) {
                str[i] = str[i] - 32;
            }
        }
    }
    return (str);
}
