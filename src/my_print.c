/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_print
*/

#include "my.h"

void print_exec(int nb_matchstick, int line, int turn)
{
    char *p = "Player";
    char *a = "AI";
    char *w;

    if (turn % 2 == 0)
        w = a;
    else
        w = p;
    my_putstr(w);
    my_putstr(" removed ");
    my_putnbr(nb_matchstick);
    my_putstr(" match(es) from line ");
    my_putnbr(line);
    my_putchar('\n');
}

void print_map(char **tab)
{
    int i = 0;

    while (tab[i] != NULL){
        my_putstr(tab[i]);
        i++;
    }
}

void print_updated_board_game(int line, int nb_matches, char **tab)
{
    tab = update_map(tab, line, nb_matches);
    print_map(tab);
}

void print_turn(int turn)
{
    if (turn % 2 == 0)
        my_putstr("AI's turn...\n");
    else
        my_putstr("Your turn:\n");
}