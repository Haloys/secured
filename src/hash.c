/*
** EPITECH PROJECT, 2024
** Secured
** File description:
** Hash
*/

#include "../include/hashtable.h"
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int hash(char *key, int len)
{
    unsigned long int idx = 0;
    int i = 0;

    if (key == NULL) {
        return 84;
    }
    while (key[i] != '\0') {
        idx = (idx * 2) ^ key[i];
        i++;
    }
    return idx;
}
