/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** project
*/

char *my_revstr(char *str)
{
    int i = 0;
    int a = 0;
    int b = 0;

    while (str[a] != '\0') {
        a = a + 1;
    }
    a = a - 1;
    while (i < a) {
        b = str[i];
        str[i] = str[a];
        str[a] = b;
        i = i + 1;
        a = a - 1;
    }
    return (str);
}
