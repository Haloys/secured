/*
** EPITECH PROJECT, 2024
** Secured
** File description:
** Insert
*/

#include "../include/hashtable.h"
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void new_node(hashtable_t *ht, char *key, char *value)
{
    node_t *new_node = malloc(sizeof(node_t));
    int hash_value = ht->hash_func(key, my_strlen(key));
    int index = hash_value % ht->size;
    node_t *current = ht->table[index];

    while (current != NULL) {
        if (my_strcmp(current->key, key) == 0) {
            free(current->value);
            current->value = my_strdup(value);
            return;
        }
        current = current->next;
    }
    new_node->hash = hash_value;
    new_node->key = my_strdup(key);
    new_node->value = my_strdup(value);
    new_node->next = ht->table[index];
    ht->table[index] = new_node;
    return;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    if (ht == NULL || key == NULL || value == NULL) {
        return 84;
    }
    new_node(ht, key, value);
    return 0;
}
