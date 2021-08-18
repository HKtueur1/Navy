/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** players_actions
*/

#include "build.h"

extern int signals_value;

void handle_sig(int signo)
{
    if (signo == SIGUSR1) {
        signals_value++;
    }
    if (signo == SIGUSR2) {
        if (signals_value > 0)
            signals_value *= -1;
        if (signals_value < 0 || signals_value == 0)
            signals_value--;
    }
}

void wait(attack_t *attacks, player_t *players)
{
    int i = 0;
    int j = 0;
    int c = 0;
    my_printf("\nwaiting for enemy's attack...\n");
    for (i = 0; i < 24; i++) {
        signal(SIGUSR1, handle_sig);
        signal(SIGUSR2, handle_sig);
        if (c == 0)
            pause();
        usleep(10);
        if (signals_value > 0)
            attacks->x = signals_value;
        if (signals_value < 0)
            attacks->y = (signals_value * (-1)) - attacks->x;
        c++;
    }
    show_position(attacks);
    my_printf("%c%d", attacks->letter, attacks->nbr);

}

void attack(attack_t *attacks, player_t *players)
{
    write(1, "\nattack: ", 9);
    read(0, attacks->buffer, 100);
    while (attacks->buffer[0] < 'A' || attacks->buffer[0] > 'H'
        || attacks->buffer[1] < '1' || attacks->buffer[1] > '8'
        || attacks->buffer[3] != '\0') {
        my_printf("wrong position\n");
        write(1, "attack: ", 9);
        for (int i = 0; i < 100; i++)
            attacks->buffer[i] = '\0';
        read(0, attacks->buffer, 100);
    }
    get_attack(attacks);
    send_attack(players, attacks);
    usleep(10);
}

void handle_players_actions(player_t *players, attack_t *attacks, maps_t *maps)
{
    bool_t *bool = malloc(sizeof(bool_t));

    while (maps->xboat < 14 && maps->exboat < 14) {
        signals_value = 0;
        if (players->player == 2) {
            player2(players, attacks, maps, bool);
        } else {
            player1(players, attacks, maps, bool);
        }
    }
    display(maps);
    if (maps->xboat == 14)
        my_printf("\nI won\n");
    else
        my_printf("\nEnemy won\n");
}