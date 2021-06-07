/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-audrey.amar
** File description:
** generate_map
*/

#include"my.h"

char *my_buffer(char *buffer, int mstar, int line)
{
    int i = 0;
    int sb = line - 1;

    starline(buffer, &i, mstar);
    buffer[i] = '\n';
    i += 1;
    for (int j = line; j > 0; j--){
        buffer = put_pipe(sb, buffer, &i);
        sb--;
    }starline(buffer, &i, mstar);
    buffer[i] = '\n';
    i += 1;
    line += 1;
    buffer[i] = '\0';
    return buffer;
}

char **map_gen(int line, char **tab)
{
    int mstar = (line * 2) + 1;
    int total_len = (line + 3) * (mstar + 2);
    char *buffer = NULL;

    buffer = malloc(sizeof(char) * total_len);
    buffer = my_buffer(buffer, mstar, line);
    tab = my_malloc(buffer, tab);
    print_map(tab);
    free(buffer);
    return tab;
}
