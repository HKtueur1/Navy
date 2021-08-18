/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-1-navy-juliette.destang
** File description:
** signaux
*/

#include "build.h"

extern int signals_value;

void handler2(int signo, siginfo_t *info, void *context)
{
    (void)signo;
    (void)context;
    my_printf("successfully connected\n");
}

void handler1(int signo, siginfo_t *info, void *context)
{
    (void)signo;
    (void)context;
    my_printf("enemy connected\n");
    signals_value = info->si_pid;
    kill(info->si_pid, SIGUSR2);
}

int init_p1(player_t *players)
{
    players->pid1 = getpid();
    struct sigaction sa;

    my_printf("my_pid: %d\n", players->pid1);
    my_printf("waiting for enemy connection...\n\n");
    sa.sa_sigaction = handler1;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &sa, NULL);
    pause();
    return (0);
}

int init_p2(int signo, player_t *players)
{
    players->pid2 = getpid();
    struct sigaction sa;

    my_printf("my_pid: %d\n", players->pid2);
    sa.sa_sigaction = handler2;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR2, &sa, NULL);
    kill (signo, SIGUSR1);
    pause();
    return (0);
}

int sig(int ac, char **av, player_t *players)
{
    int signo = 0;

    if (ac == 2) {
        init_p1(players);
    }
    else {
        players->pid1 = my_getnbr(av[1]);
        init_p2(my_getnbr(av[1]), players);
    }
}