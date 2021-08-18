/*
** EPITECH PROJECT, 2020
** strlowcase
** File description:
** project
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    if (str[i] > 64 && str[i] < 91) {
        for ( ; str[i] != '\0' ; i++) {
            str[i] = str[i] + 32;
        }
        return (str);
    }
}
