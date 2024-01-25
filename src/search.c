/*
** EPITECH PROJECT, 2024
** Secured
** File description:
** Search
*/

#include "../include/hashtable.h"
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ht_search(hashtable_t *ht, char *key)
{
    int index;
    node_t *current;

    if (ht == NULL || key == NULL) {
        return NULL;
    }
    index = ht->hash_func(key, my_strlen(key)) % ht->size;
    current = ht->table[index];
    while (current != NULL) {
        if (my_strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}
