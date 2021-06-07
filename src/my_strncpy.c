/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-theo.guguen
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int j = 0;

    while (j < n){
        dest[j] = src[j];
        j++;
    }
    while (j > n){
        dest[j] = '\0';
        j++;
    }
    return (dest);
}