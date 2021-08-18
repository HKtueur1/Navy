/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** check_boat_length
*/

#include "build.h"

void get_boat_error(char **pos, boat_t *boat)
{
    boat->cycle = 0;
    boat->j = 2;
    for (int i = 0; i < 2; i++) {
        get_boat_pos(pos, boat);
        boat->j = boat->j + 3;
        boat->cycle = 1;
    }
}

void check_boat_length2(char **pos, boat_t *boat, config_t *config_error)
{
    if (pos[config_error->i][0] == '4') {
        boat->i = 2;
        config_error->nbr = '4';
        get_boat_error(pos, boat);
    }
    if (pos[config_error->i][0] == '5') {
        boat->i = 3;
        config_error->nbr = '5';
        get_boat_error(pos, boat);
    }
}

int check_boat_length_error(char **pos, boat_t *boat, config_t *config_error)
{
    int first = my_getnbr(pos[config_error->i]);
    int i = 0;

    if (boat->x1 == boat->x2) {
        for (i = 0; boat->y1 < boat->y2; boat->y1++)
            i++;
        if (i != (first - 1))
            return (84);
    } else if (boat->y1 == boat->y2) {
        for (i = 0; boat->x1 < boat->x2; boat->x1++)
            i++;
        if ((i / 2) != (first - 1))
            return (84);
    } else
        return (84); 
    return (0);
}

int check_boat_length(char **pos, boat_t *boat)
{
    config_t *config_error = malloc(sizeof(config_t));
    
    for (config_error->i = 0; config_error->i < 4; config_error->i++) {
        if (pos[config_error->i][0] == '2') {
            boat->i = 0;
            config_error->nbr = '2';
            get_boat_error(pos, boat);
        }
        if (pos[config_error->i][0] == '3') {
            boat->i = 1;
            config_error->nbr = '3';
            get_boat_error(pos, boat);
        }
        check_boat_length2(pos, boat, config_error);
        if (check_boat_length_error(pos, boat, config_error) == 84)
            return (84);
    }
    return (0);
}