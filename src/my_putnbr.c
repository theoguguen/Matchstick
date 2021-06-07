/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_putnbr
*/

#include "my.h"

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return 0;
    }
    else if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    int n = nb % 10 + '0';
    nb = nb / 10;
    if (nb > 0)
        my_putnbr(nb);
    my_putchar(n);
    return 0;
}