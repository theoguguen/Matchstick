/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_putstr
*/

#include "my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}