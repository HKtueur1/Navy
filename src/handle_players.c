/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** handle_players
*/

#include "build.h"

extern int signals_value;

void player1(player_t *players, attack_t *attacks, maps_t *maps, bool_t *bool)
{
    if (bool->swap_pid == 1) {
        players->pid = players->pid1;
        bool->swap_pid--;
    } else {
        players->pid = players->pid2;
        bool->swap_pid++;
    }
    attack(attacks, players);
    game(maps, attacks, players);
    if (bool->show_map == 1) {
        display(maps);
        bool->show_map--;
    } else
        bool->show_map++;
    attacks->x = 0;
    attacks->y = 0;
    signals_value = 0;
    players->player++;
}

void player2(player_t *players, attack_t *attacks, maps_t *maps, bool_t *bool)
{
    if (bool->swap_pid == 1) {
            players->pid = players->pid2;
            bool->swap_pid--;
        } else {
            players->pid = players->pid1;
            bool->swap_pid++;
        }
        wait(attacks, players);
        game(maps, attacks, players);
        if (bool->show_map == 1) {
            display(maps);
            bool->show_map--;
        } else
            bool->show_map++;
        attacks->x = 0;
        attacks->y = 0;
        signals_value = 0;
        players->player--;
}