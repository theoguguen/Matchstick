/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** update
*/

#include "my.h"

char **update_map(char **tab, int line, int nb_matches)
{
    size_t i = 1;

    while (tab[line][i] != '*')
        i++;
    i -= 1;
    while (tab[line][i] != '\n'){
        if (nb_matches == 0)
            break;
        if (tab[line][i] == '|'){
            tab[line][i] = ' ';
            nb_matches--;
        }i--;
    }
    return tab;
}