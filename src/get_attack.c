/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** get_attack
*/

#include "build.h"

void line_value2(attack_t *attacks)
{
    int i = 0;
    switch (attacks->buffer[1]) {
        case '1': i = 0; break;
        case '2': i = 1; break;
        case '3': i = 2; break;
        case '4': i = 3; break;
        case '5': i = 4; break;
        case '6': i = 5; break;
        case '7': i = 6; break;
        case '8': i = 7; break;
    }
    attacks->y = i;
}

void get_attack(attack_t *attacks)
{
    int i = 0;
    switch (attacks->buffer[0]) {
        case 'A': i = 0; line_value2(attacks); break;
        case 'B': i = 2; line_value2(attacks); break;
        case 'C': i = 4; line_value2(attacks); break;
        case 'D': i = 6; line_value2(attacks); break;
        case 'E': i = 8; line_value2(attacks); break;
        case 'F': i = 10; line_value2(attacks); break;
        case 'G': i = 12; line_value2(attacks); break;
        case 'H': i = 14; line_value2(attacks); break;
    }
    attacks->x = i;
}