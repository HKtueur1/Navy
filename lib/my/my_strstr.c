/*
** EPITECH PROJECT, 2020
** strstr
** File description:
** project
*/

char *my_strstr(char *str , char  const *to_find)
{
    int i = 0;
    int j = 0;
    int c = 0;

    while (str[i] != '\0') {
        c = i;
        while (str[i] == to_find[j]) {
            i = i + 1;
            j = j + 1;
        }
        i = c;
        if (to_find[j] == '\0') {
            return (str + i);
        }
        i = i + 1;
        j = 0;
    }
}
