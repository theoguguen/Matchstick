/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** mapgen_line
*/

#include "my.h"

char *putspace(int nb, char *buffer, int *i)
{
    for (; nb > 0; nb--){
        buffer[*i] = ' ';
        *i = *i + 1;
    }return buffer;
}

char *put_pipe(int sb, char *buffer, int *i)
{
    static int nb = 1;

    buffer[*i] = '*';
    *i = *i + 1;
    buffer = putspace(sb, buffer, i);
    for (int j = nb; j > 0; j--){
        buffer[*i] = '|';
        *i = *i + 1;
    }buffer = putspace(sb, buffer, i);
    buffer[*i] = '*';
    *i = *i + 1;
    buffer[*i] = '\n';
    *i = *i + 1;
    nb += + 2;
    return buffer;
}

void starline(char *buffer, int *i, int mstar)
{
    for (; mstar > 0; mstar--) {
        buffer[*i] = '*';
        *i = *i + 1;
    }
}