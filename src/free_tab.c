/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** free_tab
*/

#include "my.h"

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}