/*
** EPITECH PROJECT, 2024
** Main lib
** File description:
** my_strdup
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(const char *s)
{
    size_t len = 0;
    char *new_str;

    if (s == NULL) {
        return NULL;
    }
    while (s[len] != '\0') {
        len++;
    }
    new_str = malloc(len + 1);
    if (new_str == NULL) {
        return NULL;
    }
    for (size_t i = 0; i <= len; i++) {
        new_str[i] = s[i];
    }
    return new_str;
}
