/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** boat
*/

#include "build.h"

void boat_build(maps_t *maps, boat_t *boat, char nbr)
{
    if (boat->y1 == boat->y2)
    for (; boat->x1 <= boat->x2; boat->x1 = boat->x1 + 2) {
            maps->map[boat->y1][boat->x1] = nbr;
    }
    if (boat->x1 == boat->x2)
        for (; boat->y1 <= boat->y2; boat->y1++) {
            maps->map[boat->y1][boat->x1] = nbr;
        }
}

void get_boat(char **pos, boat_t *boat)
{
    boat->cycle = 0;
    boat->j = 2;
    for (int i = 0; i < 2; i++) {
        get_boat_pos(pos, boat);
        boat->j = boat->j + 3;
        boat->cycle = 1;
    }
}

void check_boat2(char **pos, maps_t *maps, boat_t *boat, config_t *config)
{
    if (pos[config->i][0] == '4') {
        boat->i = 2;
        config->nbr = '4';
        get_boat(pos, boat);
        boat_build(maps, boat, config->nbr);
    }
    if (pos[config->i][0] == '5') {
        boat->i = 3;
        config->nbr = '5';
        get_boat(pos, boat);
        boat_build(maps, boat, config->nbr);
    }
}

void check_boat(char **pos, maps_t *maps, boat_t *boat)
{
    config_t *config = malloc(sizeof(config_t));
    
    for (config->i = 0; config->i < 5; config->i++) {
        if (pos[config->i][0] == '2') {
            boat->i = 0;
            config->nbr = '2';
            get_boat(pos, boat);
            boat_build(maps, boat, config->nbr);
        }
        if (pos[config->i][0] == '3') {
            boat->i = 1;
            config->nbr = '3';
            get_boat(pos, boat);
            boat_build(maps, boat, config->nbr);
        }
        check_boat2(pos, maps, boat, config);
    }
}