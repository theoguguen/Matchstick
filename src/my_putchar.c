/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}