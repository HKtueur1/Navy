/*
** EPITECH PROJECT, 2020
** strlen
** File description:
** project
*/

int my_strlen(char const *str)
{
    int i = 0;  

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
