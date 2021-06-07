/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** load2d
*/

#include "my.h"

static int is_end(char c)
{
    if (c <= '\n')
        return 0;
    return 1;
}

static int word_count(char *str)
{
    size_t i = 0;
    size_t counter = 0;

    while (str != NULL && str[i]){
        if (is_end(str[i]) == 1 && is_end(str[i + 1]) == 0)
            counter++;
        i++;
    }
    return counter;
}

char **my_malloc(char *buf, char **tab)
{
    int j = 0;
    int i = 0;
    char *str = buf;
    int len = 0;

    tab = malloc((word_count(str) + 2) * sizeof(char *));
    while (str != NULL && str[i]){
        if (is_end(str[i]))
            len = len + 1;
        if (is_end(str[i]) == 1 && is_end(str[i + 1]) == 0){
            tab[j] = malloc(len + 2);
            my_strncpy(tab[j], &str[i - len + 1], len);
            tab[j][len] = '\n';
            tab[j][len + 1] = '\0';
            len = 0;
            j++;
        }
        i++;
    }
    tab[j] = NULL;
    return tab;
}
