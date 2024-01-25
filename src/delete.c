/*
** EPITECH PROJECT, 2024
** Secured
** File description:
** Delete
*/

#include "../include/hashtable.h"
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int remove_node(hashtable_t *ht, node_t **prev, node_t *current, int index)
{
    if (*prev != NULL) {
        (*prev)->next = current->next;
    } else {
        ht->table[index] = current->next;
    }
    free(current->key);
    free(current->value);
    free(current);
    return 0;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int index;
    node_t *current;
    node_t *prev;

    if (ht == NULL || key == NULL) {
        return 84;
    }
    index = ht->hash_func(key, my_strlen(key)) % ht->size;
    current = ht->table[index];
    prev = NULL;
    while (current != NULL) {
        if (my_strcmp(current->key, key) == 0) {
            return remove_node(ht, &prev, current, index);
        }
        prev = current;
        current = current->next;
    }
    return -1;
}
