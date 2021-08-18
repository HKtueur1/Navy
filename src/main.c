/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main
*/

#include "build.h"

int signals_value;

void start(player_t *players, attack_t *attacks, maps_t *maps)
{
    if (players->player == 1)
        players->pid2 = signals_value;
    handle_players_actions(players, attacks, maps);
}

int select_player(int ac, char **av, player_t *players)
{
    int fd = 0;
    if (ac > 3)
        return (84);
    if (ac == 3) {
        fd = open(av[2], O_RDONLY);
        if (fd == -1)
            return (84);
        players->player = 2;
        return (fd);
    }
    else {
        fd = open(av[1], O_RDONLY);
        if (fd == -1)
            return (84);
        players->player = 1;
        return (fd);
    }
}

void init_game(maps_t *maps, char **pos, boat_t *boat)
{
    build_map(maps);
    check_boat(pos, maps, boat);
    display(maps);
}

int main(int ac, char **av)
{
    if (argv_nbr(ac) == 84)
        return (84);
    maps_t *maps = malloc(sizeof(maps_t));
    boat_t *boat = malloc(sizeof(boat_t));
    attack_t *attacks = malloc(sizeof(attack_t));
    player_t *players = malloc(sizeof(player_t));
    char **pos;
    maps->map = malloc(sizeof(char *) * 100);
    maps->emap = malloc(sizeof(char *) * 100);

    if (84 == select_player(ac, av, players))
        return (84);
    int fd = select_player(ac, av, players);
    pos = build_pos(fd);
    if (error_pos(pos, boat) == 84)
        return (84);
    sig(ac, av, players);
    init_game(maps, pos, boat);
    start(players, attacks, maps);
    return (0);
}