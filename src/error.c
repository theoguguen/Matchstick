/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** error
*/

#include "my.h"

int match_error(char *buffer, int line, char **tab, int max_sticks)
{
    int nb;

    if (my_str_isnum(buffer) == 1){
        my_putstr("Error: invalid input (positive number expected)\n");
        return 1;
    }nb = my_getnbr(buffer);
    if (nb > max_sticks){
        my_putstr("Error: you cannot remove more than ");
        my_putnbr(max_sticks);
        my_putstr(" matches per turn\n");
        return 1;
    }if (nb <= 0){
        my_putstr("Error: you have to remove at least one match\n");
        return 1;
    }if (nb > (line * 2) - 1 || is_emptyline(tab, line, nb) == 0){
        my_putstr("Error: not enough matches on this line\n");
        return 1;
    }return 0;
}

int line_error(char *buffer, int max_line, int line)
{
    if (my_str_isnum(buffer) == 1){
        my_putstr("Error: invalid input (positive number expected)\n");
        return 1;
    }if (line > max_line || line <= 0){
        my_putstr("Error: this line is out of range\n");
        return 1;
    }return 0;
}