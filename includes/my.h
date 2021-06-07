/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my
*/

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>

#ifndef _MY_H_
#define _MY_H_

typedef struct game_s {
    int max_sticks;
    int max_line;
    int randline;
    int randmatch;
    int line;
    int nb_matchstick;
    int turn;
    int s_turn;
    char **tab;
    char *buff;
}game_t;

void my_putchar(char c);

void my_putstr(char *str);

char *my_strncpy(char *dest, char const *src, int n);

char **my_str_to_wordtab(char *str);

int loop(game_t *game);

int my_getnbr(char *str);

int my_putnbr(int nb);

int my_strcmp(char *s1, char *s2);

int my_atoi(char *str);

int my_str_isnum(char const *str);

void print_exec(int nb_matchstick, int line, int turn);

void print_map(char **tab);

void print_updated_board_game(int line, int nb_matches, char **tab);

void print_turn(int turn);

void free_tab(char **tab);

char **update_map(char **tab, int line, int nb_matches);

int match_error(char *buffer, int line, char **tab, int max_sticks);

int line_error(char *buffer, int max_line, int line);

int is_emptyline(char **tab, int line, int nb_matchstick);

int arg_check(int ac, char **av);

char **map_gen(int line, char **tab);

char *put_pipe(int sb, char *buf, int *i);

char *putspace(int nb, char *buf, int *i);

void starline(char *buf, int *i, int p);

int is_emptyline(char **tab, int line, int nb_matchstick);

int check_end(char **tab, int turn);

int ai_matcherror(int max_sticks, char **tab, int max_line);

char **my_malloc(char *buf, char **tab);

char **map_gen(int size, char **tab);

int randommatch(int max_sticks, int j);

int randomline(char **tab, int max_line, int *j);

int isthereonlyoneline(char **tab);

char **update_map(char **tab, int line, int nb_matches);

int ia_exec(game_t *game);

int lastline(char **tab);

int my_getline(game_t *game);

#endif