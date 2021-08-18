/*
** EPITECH PROJECT, 2020
** strupcase
** File description:
** project
*/

char *my_strupcase(char *str)
{
    int i = 0;

    if (str[i] > 96 && str[i] < 123) {
        for ( ; str[i] != '\0' ; i++) {
            str[i] = str[i] - 32;
        }
        return (str);
    }
}
