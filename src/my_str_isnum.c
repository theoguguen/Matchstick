/*
** EPITECH PROJECT, 2020
** str is alpha
** File description:
** a
*/

int my_str_isnum(char *str)
{
    int i = 0;

    while (str[i] != '\n'){
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return 1;
    }
    return (0);
}
