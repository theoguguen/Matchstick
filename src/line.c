/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** line
*/

#include "my.h"

int lastline(char **tab)
{
    int line = 0;

    for (int i = 0; tab[i] != NULL; i++)
        for (int j = 0; tab[i][j] != '\0'; j++) {
            if (tab[i][j] == '|'){
                line = i;
                return line;
            }
        }
    return 0;
}

int my_getline(game_t *game)
{
    size_t s = 0;

    my_putstr("Line: ");
    if (getline(&game->buff, &s, stdin) == -1) {
        my_putchar('\n');
        return 0;
    } game->line = my_atoi(game->buff);
    if (line_error(game->buff, game->max_line, game->line) == 1) {
        game->s_turn = -1;
        return 1;
    } my_putstr("Matches: ");
    if (getline(&game->buff, &s, stdin) == -1) {
        my_putchar('\n');
        return 0;
    }
    game->nb_matchstick = my_atoi(game->buff);
    if (match_error(game->buff, game->line, game->tab, game->max_sticks) == 1){
        game->s_turn = -1;
        return 1;
    }
    return 2;
}
