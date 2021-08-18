/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** game
*/

#include "build.h"

extern int signals_value;

void handler_hits(int signo)
{
    signals_value = 1;
}

void handler_missed(int signo)
{
    signals_value = 0;
}

void check_hit_wait(maps_t *maps, attack_t *attacks, player_t *players)
{
    signal(SIGUSR1, handler_hits);
    signal(SIGUSR2, handler_missed);
    pause();
    if (signals_value == 1) {
        maps->emap[attacks->y][attacks->x] = 'x';
        my_printf("%c%c: hit\n", attacks->buffer[0], attacks->buffer[1]);
        maps->xboat++;
    } else {
        maps->emap[attacks->y][attacks->x] = 'o';
        my_printf("%c%c: missed\n", attacks->buffer[0], attacks->buffer[1]);
    }
}

void check_hit_attack(maps_t *maps, attack_t *attacks, player_t *players)
{
    if (maps->map[attacks->y][attacks->x] > '1'
        && maps->map[attacks->y][attacks->x] < '6') {
        maps->map[attacks->y][attacks->x] = 'x';
        my_printf(": hit\n");
        kill(players->pid, SIGUSR1);
        maps->exboat++;
    }
    else {
        maps->map[attacks->y][attacks->x] = 'o';
        my_printf(": missed\n");
        kill(players->pid, SIGUSR2);
    }
}

int game(maps_t *maps, attack_t *attacks, player_t *players)
{
    if (players->player == 2)
        check_hit_attack(maps, attacks, players);
    if (players->player == 1)
        check_hit_wait(maps, attacks, players);
}