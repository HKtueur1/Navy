/*
** EPITECH PROJECT, 2020
** strcat
** File description:
** project
*/

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int j = 0;
    int c = 0;

    while (dest[i] != '\0') {
        i = i + 1;
    }
    while ( src[j] != '\0') {
        dest[i] = src[j];
        i = i + 1;
        j = j + 1;
    }
    c = i + j;
    dest[c] = '\0';
    return (dest); 
}
