//
// Created by Erick Gomes on 21/05/24.
//

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void create(t_queue *fila, int size) {
    fila->items = (int *) malloc(size * sizeof(int));
    fila->front = -1;
    fila->back = -1;
    fila->max_size = size;
}

void in(t_queue *fila, int val) {
    if ((fila->back + 1) % fila->max_size == fila->front) {
        printf("Queue full\n");
        return;
    }
    if (fila->front == -1) {
        fila->front = 0;
    }
    fila->back = (fila->back + 1) % fila->max_size;
    fila->items[fila->back] = val;
}

void out(t_queue *fila, int *outVal) {
    if (fila->front == -1) {
        printf("Queue empty\n");
        *outVal = -1;
        return;
    }
    *outVal = fila->items[fila->front];
    if (fila->front == fila->back) {
        fila->front = -1;
        fila->back = -1;
    } else {
        fila->front = (fila->front + 1) % fila->max_size;
    }
}

bool is_empty(t_queue *fila) {
    return (fila->front == -1);
}

bool is_full(t_queue *fila) {
    return ((fila->back + 1) % fila->max_size == fila->front);
}

void clear(t_queue *fila) {
    fila->front = -1;
    fila->back = -1;
}

int size(t_queue *fila) {
    if (is_empty(fila)) {
        return 0;
    }
    if (fila->back >= fila->front) {
        return fila->back - fila->front + 1;
    }
    return fila->max_size - fila->front + fila->back + 1;
}
