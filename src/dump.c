/*
** EPITECH PROJECT, 2024
** Secured
** File description:
** Dump
*/

#include "../include/hashtable.h"
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void ht_dump(hashtable_t *ht)
{
    node_t *current;

    if (!ht)
        return;
    for (int i = 0; i < ht->size; i++) {
        mini_printf("[%d]:\n", i);
        current = ht->table[i];
        if (!current) {
            continue;
        }
        while (current) {
            mini_printf("> %d - %s\n", current->hash, current->value);
            current = current->next;
        }
    }
}
