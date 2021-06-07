/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_ai
*/

#include "my.h"

int randommatch(int max_sticks, int j)
{
    int sticks = random() % j;

    if (sticks == 0)
        sticks += 1;
    if (sticks > max_sticks || sticks > j)
        while (sticks > max_sticks)
            sticks--;
    return sticks;
}

int randomline(char **tab, int max_line, int *j)
{
    int i = 0;
    int line = 0;

    line = random() % max_line;
    if (line == 0)
        line += 1;
    while (tab[line][i] != '\n'){
        if (tab[line][i] == '|')
            *j += 1;
        i++;
    }
    return line;
}

int ia_exec(game_t *game)
{
    if (game->turn % 2 == 0 && game->s_turn != -1) {
        print_exec(game->randmatch, game->randline, game->turn);
        print_updated_board_game(game->randline, game->randmatch, game->tab);
        game->turn++;
        return 1;
    }
    return 0;
}