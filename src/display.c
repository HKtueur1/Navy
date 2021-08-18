/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** display
*/

#include "build.h"

void display_map1(maps_t *maps)
{
    my_printf("\nmy position:\n");
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 0; i < 8; i++) {
        my_printf("%d", i + 1);
        my_printf("|");
        for (int j = 0; j < 15; j = j + 2) {
            my_printf("%c", maps->map[i][j]);
            my_printf("%c", maps->map[i][j + 1]);
        }
        my_printf("\n");
    }
}

void display_map2(maps_t *maps)
{
    my_printf("enemy's positions:\n");
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 0; i < 8; i++) {
        my_printf("%d", i + 1);
        my_printf("|");
        for (int j = 0; j < 15; j = j + 2) {
            my_printf("%c", maps->emap[i][j]);
            my_printf("%c", maps->emap[i][j + 1]);
        }
        my_printf("\n");
    }
}

void display(maps_t *maps)
{
    display_map1(maps);
    my_printf("\n");
    display_map2(maps);
}