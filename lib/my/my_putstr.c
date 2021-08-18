/*
** EPITECH PROJECT, 2020
** putstr
** File description:
** project
*/

#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char  const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
