/*
** EPITECH PROJECT, 2020
** sort int array
** File description:
** project
*/

#include "my.h"

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int j = 0;
    int c = 0;

    for (; i < size ; i++) {
        if (tab[i] > tab[i + 1]) {
            j = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = j;
            c = 1;
        }
    }
    if (c == 1) {
        my_sort_int_array(tab, size);
    }
}
