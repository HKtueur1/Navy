/*
** EPITECH PROJECT, 2020
** strcmp
** File description:
** project
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for ( ; s1[i] != '\0' ; i++) {
        if (s1[i] > s2[i]) {
            return (1);
        }
        if (s1[i] < s2[i]) {
            return (-1);
        }
        if (s1[i] == '\0') {
            return (0);
        }
    }
}
