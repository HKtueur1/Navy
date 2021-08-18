/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** usefull
*/

#include "build.h"

void show_position(attack_t *attack)
{
    switch (attack->x) {
        case 0: attack->letter = 'A'; attack->nbr = attack->y + 1; break;
        case 2: attack->letter = 'B'; attack->nbr = attack->y + 1; break;
        case 4: attack->letter = 'C'; attack->nbr = attack->y + 1; break;
        case 6: attack->letter = 'D'; attack->nbr = attack->y + 1; break;
        case 8: attack->letter = 'E'; attack->nbr = attack->y + 1; break;
        case 10: attack->letter = 'F'; attack->nbr = attack->y + 1; break;
        case 12: attack->letter = 'G'; attack->nbr = attack->y + 1; break;
        case 14: attack->letter = 'H'; attack->nbr = attack->y + 1; break;
    }
}

void line_value(char **pos, boat_t *boat)
{
    int i = 0;
    switch (pos[boat->i][boat->j + 1]) {
        case '1': i = 0; break;
        case '2': i = 1; break;
        case '3': i = 2; break;
        case '4': i = 3; break;
        case '5': i = 4; break;
        case '6': i = 5; break;
        case '7': i = 6; break;
        case '8': i = 7; break;
    }
    if (boat->cycle == 0)
        boat->y1 = i;
    if (boat->cycle == 1)
        boat->y2 = i;
}

void get_boat_pos(char **pos, boat_t *boat)
{
    int i = 0;
    
    switch (pos[boat->i][boat->j]) {
        case 'A': i = 0; line_value(pos, boat); break;
        case 'B': i = 2; line_value(pos, boat); break;
        case 'C': i = 4; line_value(pos, boat); break;
        case 'D': i = 6; line_value(pos, boat); break;
        case 'E': i = 8; line_value(pos, boat); break;
        case 'F': i = 10; line_value(pos, boat); break;
        case 'G': i = 12; line_value(pos, boat); break;
        case 'H': i = 14; line_value(pos, boat); break;
    }
    if (boat->cycle == 0)
        boat->x1 = i;
    if (boat->cycle == 1)
        boat->x2 = i;
}