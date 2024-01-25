/*
** EPITECH PROJECT, 2024
** Secured
** File description:
** Utils
*/

#include "../include/hashtable.h"
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

hashtable_t *new_hashtable(int (*hash_func)(char *, int), int size)
{
    hashtable_t *ht = malloc(sizeof(hashtable_t));

    if (!ht || size < 1 || size > 2147483646)
        return NULL;
    ht->size = size;
    ht->hash_func = hash_func;
    ht->table = malloc(sizeof(node_t *) * size);
    if (!ht->table) {
        free(ht);
        return NULL;
    }
    for (int i = 0; i < size; i++)
        ht->table[i] = NULL;
    return ht;
}

void delete_hashtable(hashtable_t *ht)
{
    node_t *current = NULL;
    node_t *temp = NULL;

    if (!ht) {
        return;
    }
    for (int i = 0; i < ht->size; i++) {
        current = ht->table[i];
        while (current) {
            temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(ht->table);
    free(ht);
}
