/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}