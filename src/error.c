/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** error
*/

#include "build.h"

int check_begining(char **pos)
{
    int j = 0;
    for (int i = 0; i < 4; i++) {
        switch (j) {
            case 0: 
            if (pos[i][0] != '2')
                return (84); break;
            case 1: 
            if (pos[i][0] != '3') 
                return (84); break;
            case 2: 
            if (pos[i][0] != '4')
                return (84); break;
            case 3: 
            if (pos[i][0] != '5')
                return (84); break;
        }
        j++;
    }
    return (0);
}

int check_characters(char **pos)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < 4; i++) {
        if (pos[i][2] < 'A' || pos[i][2] > 'H'
        || pos[i][5] < 'A' || pos[i][5] > 'H')
            return (84);
        if (pos[i][3] < '1' || pos[i][3] > '8'
        || pos[i][6] < '1' || pos[i][6] > '8')
            return (84);
        if (pos[i][1] != ':' || pos[i][4] != ':')
            return (84);
    }
}

int error_pos(char **pos, boat_t *boat)
{
    int i = 0;
    int j = 0;

    if (check_begining(pos) == 84)
        return (84);
    if (check_characters(pos) == 84)
        return (84);
    if (pos[4][7] != '\0')
        return (84);
    if (check_boat_length(pos, boat) == 84)
        return (84);
}

int argv_nbr(int ac)
{
    if (ac < 2 || ac > 3)
        return (84);
}