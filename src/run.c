/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** main
*/

#include "my.h"

static game_t *init_struct(char **av, game_t *game)
{
    game->max_sticks = my_getnbr(av[2]);
    game->max_line = my_getnbr(av[1]);
    game->tab = map_gen(game->max_line, game->tab);
    game->buff = NULL;
    game->turn = 1;
    game->s_turn = 0;
    return game;
}

int main(int ac, char **av)
{
    int ret = 0;
    int c = arg_check(ac, av);
    game_t *game = malloc(sizeof(game_t));

    if (c != 1)
        return c;
    game = init_struct(av, game);
    ret = loop(game);
    free(game);
    return ret;
}