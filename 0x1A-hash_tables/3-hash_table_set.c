#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *new_item;

    if (key == NULL || ht == NULL || value == NULL)
    {
        return (0);
    }
    new_item = malloc(sizeof(hash_node_t));

    if (new_item == NULL)
    {
        return 0;
    }

    
    idx = key_index((const unsigned char *) key, ht->size);
    
    new_item->key = strdup(key);
    new_item->value = strdup(value);
    new_item->next = NULL;

    if (new_item->key == NULL || new_item->value == NULL)
    {
        free(new_item->key);
        free(new_item->value);
        free(new_item);
        return (0);
    }    
    
    if (ht->array[idx] == NULL)
        ht->array[idx] == new_item;
    else
    {
        new_item->next = ht->array[idx];
        ht->array[idx] = new_item;
    }
    return (1);

}