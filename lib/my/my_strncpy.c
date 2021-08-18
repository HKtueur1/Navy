/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** project
*/

char *my_strncpy(char *dest , char  const *src , int n)
{
    int i;

    i = 0;
    while (i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    return (dest);
}

