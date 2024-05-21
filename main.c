#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main() {
    t_queue fila;
    int outVal;

    // Criar uma fila com capacidade para 5 elementos
    create(&fila, 5);

    // Inserir elementos na fila
    in(&fila, 10);
    in(&fila, 20);
    in(&fila, 30);
    in(&fila, 40);
    in(&fila, 50);

    // Tentar inserir um elemento quando a fila está cheia
    in(&fila, 60);  // Este deve mostrar "Queue full"

    // Exibir o estado da fila
    printf("Tamanho da fila: %d\n", size(&fila));

    // Remover dois elementos da fila
    out(&fila, &outVal);
    printf("Removido: %d\n", outVal);
    out(&fila, &outVal);
    printf("Removido: %d\n", outVal);

    // Exibir o estado da fila após remoções
    printf("Tamanho da fila: %d\n", size(&fila));

    // Inserir mais elementos na fila
    in(&fila, 60);
    in(&fila, 70);

    // Exibir o estado final da fila
    printf("Tamanho da fila: %d\n", size(&fila));

    // Verificar se a fila está vazia ou cheia
    printf("Fila está vazia? %s\n", is_empty(&fila) ? "Sim" : "Não");
    printf("Fila está cheia? %s\n", is_full(&fila) ? "Sim" : "Não");

    // Esvaziar a fila
    clear(&fila);
    printf("Fila esvaziada.\n");
    printf("Tamanho da fila: %d\n", size(&fila));
    printf("Fila está vazia? %s\n", is_empty(&fila) ? "Sim" : "Não");

    // Liberar a memória alocada para os itens da fila
    free(fila.items);

    return 0;
}
