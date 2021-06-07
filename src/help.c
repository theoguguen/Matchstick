/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** help
*/

#include "my.h"

static void help(void)
{
    my_putstr("USAGE\n");
    my_putstr(" ./matchstick [lines] [max matchsticks / round]\n");
}

int arg_check(int ac, char **av)
{
    if (my_strcmp(av[1], "-h") == 0 && ac == 2){
        help();
        return 0;
    }if (ac != 3){
        my_putstr("Error: bad argument.\n");
        my_putstr("Type ./matchstick -h for informations\n");
        return 84;
    }if (my_getnbr(av[1]) <= 0 || my_getnbr(av[2]) <= 0){
        my_putstr("Precise valid numbers (> 0)\n");
        return 84;
    }return 1;
}