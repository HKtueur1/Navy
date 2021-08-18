/*
** EPITECH PROJECT, 2020
** strncmp
** File description:
** project
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int j = 0;

    for ( ; i < n ; i++) {
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
