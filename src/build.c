/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** build
*/

#include "build.h"

char *build_line(int fd)
{
    int i = 0;
    char *str = malloc(sizeof(char *) * 100);

    char buffer[5000];
    buffer[0] = '\0';
    for (; i < 8; i++) {
        int value = read(fd, buffer, 1);
        str[i] = buffer[0];
    }
    return (str);
}

char **build_pos(int fd)
{
    char **map = malloc(sizeof(char *) * 100);
    char *line = "-1";
    int i = 0;

    for (; i < 5 ; i++) {
        line = build_line(fd);
        map[i] = line;
    }
    return (map);
}

void build_map(maps_t *maps)
{
    for (int i = 0; i < 8; i++) {
        maps->map[i] = malloc(sizeof(char) * 100);
        maps->emap[i] = malloc(sizeof(char) * 100);
        for (int j = 0; j < 15; j = j + 2) {
            maps->map[i][j] = '.';
            maps->emap[i][j] = '.';
            maps->map[i][j + 1] = ' ';
            maps->emap[i][j + 1] = ' ';
        }
    }
}