//
// Created by Erick Gomes on 21/05/24.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef struct {
    int *items;
    int max_size;
    int front;
    int back;
} t_queue;

void create(t_queue * fila, int size);
void in(t_queue * fila, int val);
void out(t_queue * fila, int * outVal);
bool is_empty(t_queue * fila);
bool is_full(t_queue * fila);
void clear(t_queue * fila);
int size(t_queue * fila);

#endif //QUEUE_H
