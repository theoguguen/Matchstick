/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-bsmatchstick-theo.guguen
** File description:
** read_player_move_and_print_updated_board_game
*/

#include "my.h"

void next_turn(game_t *game)
{
    print_exec(game->nb_matchstick, game->line, game->turn);
    print_updated_board_game(game->line, game->nb_matchstick, game->tab);
    game->turn++;
}

void pick_random(game_t *game, int j)
{
    game->randline = randomline(game->tab, game->max_line, &j);
    game->randmatch = randommatch(game->max_sticks, j);
    while (is_emptyline(game->tab, game->randline, game->randmatch) == 0) {
        game->randline = randomline(game->tab, game->max_line, &j);
        game->randmatch = randommatch(game->max_sticks, j);
    }
}

int game_loop(game_t *game)
{
    int j = 1;
    int f = 0;

    if (isthereonlyoneline(game->tab) == 1)
        game->randline = lastline(game->tab);
    else
        pick_random(game, j);
    if (game->s_turn != -1){
        my_putchar('\n');
        print_turn(game->turn);
    }
    if (ia_exec(game) == 1)
        return 3;
    game->s_turn = 0;
    f = my_getline(game);
    if (f == 1)
        return 3;
    if (f == 0)
        return 0;
    next_turn(game);
    return 2;
}

int loop(game_t *game)
{
    int end = 0;
    int g = 0;

    while (true){
        g = game_loop(game);
        if (g == 1)
            return 1;
        if (g == 0)
            return 0;
        end = check_end(game->tab, game->turn);
        if (end != 0)
            return end;
    }
    return 0;
}