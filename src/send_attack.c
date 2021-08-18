/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** send_attack
*/

#include "build.h"

void signals(int user_pid)
{
    kill(user_pid, SIGUSR1);
}

void signals2(int user_pid)
{
    kill(user_pid, SIGUSR2);
}

void send_attack(player_t *players, attack_t *attacks)
{
    if (attacks->x == 0 && attacks->y == 0) {
        signals2(players->pid);
        signals(players->pid);
    }
    for (int i = 0; i < attacks->x; i++) {
        signals(players->pid);
        usleep(10);
    }
    for (int i = 0; i < attacks->y; i++) {
        signals2(players->pid);
        usleep(10);
    }
}