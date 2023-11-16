#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
