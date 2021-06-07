/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** check
*/

#include "my.h"

int is_emptyline(char **tab, int line, int nb_matchstick)
{
    size_t i = 0;
    int j = 0;

    while (tab[line][i] != '\n') {
        if (tab[line][i] == '|') {
            i++;
            j++;
        }else
            i++;
    }
    if (j == 0 || j < nb_matchstick)
        return 0;
    else
        return 1;
}

int check_end(char **tab, int turn)
{
    for (int i = 0; tab[i]; i++){
        for (int j = 0; tab[i][j] != '\n'; j++){
            if (tab[i][j] == '|')
                return 0;
        }
    }if (turn % 2 == 0){
        my_putstr("You lost, too bad...\n");
        return 2;
    }else{
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return 1;
    }return 0;
}

int isthereonlyoneline(char **tab)
{
    int z = 0;

    for (int i = 0; tab[i] != NULL; i++){
        for (int j = 0; tab[i][j] != '\0'; j++){
            if (tab[i][j] == '|'){
                z++;
                i++;
            }
        }
    }
    return z;
}