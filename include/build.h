/*
** EPITECH PROJECT, 2020
** navy
** File description:
** build
*/

#ifndef BUILD_H_
#define BUILD_H_

#include "my.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>

typedef struct player_s {
    int pid;
    int pid1;
    int pid2;
    int player;
} player_t;

typedef struct maps_s {
    char **map;
    char **emap;
    int xboat;
    int exboat;
} maps_t;

typedef struct attack_s {
    int x;
    int y;
    char letter;
    int nbr;
    char buffer[100];
} attack_t;

typedef struct boat_s {
    int x1;
    int x2;
    int y1;
    int y2;
    int cycle;
    int i;
    int j;
} boat_t;

typedef struct config_s {
    int nbr;
    int i;
}config_t;

typedef struct bool_s {
    int swap_pid;
    int show_map;
} bool_t;

void check_boat(char **pos, maps_t *maps, boat_t *boat);
void get_boat_pos(char **pos, boat_t *boat);
void get_attack(attack_t *attacks);
void send_attack(player_t *player, attack_t *attacks);
void handle_players_actions(player_t *player, attack_t *attacks, maps_t *map);
void player1(player_t *players, attack_t *attacks, maps_t *maps, bool_t *bool);
void player2(player_t *players, attack_t *attacks, maps_t *maps, bool_t *bool);
void attack(attack_t *attacks, player_t *players);
void wait(attack_t *attacks, player_t *players);
void show_position(attack_t *attack);
void display(maps_t *maps);
char **build_pos(int fd);
int argv_nbr(int ac);
int check_boat_length(char **pos, boat_t *boat);
void build_map(maps_t *maps);
int sig(int ac, char **av, player_t *player);
int game(maps_t *maps, attack_t *attacks, player_t *players);
int error1(int ac);
int error2(int ac);
int error_pos(char **pos, boat_t *boat);

#endif
