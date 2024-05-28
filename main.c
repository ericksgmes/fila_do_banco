//
// Created by Erick Gomes on 21/05/24.
//

#include <stdio.h>

#include "queue.h"
#include "parsedResult.h"

#define MAX_QUEUE_SIZE 20

int main() {
    char n[255];
    ParsedResult parsed_result;
    t_queue fila_geral, fila_prioridade, fila_resultados;
    create(&fila_geral, MAX_QUEUE_SIZE);
    create(&fila_prioridade, MAX_QUEUE_SIZE);
    create(&fila_resultados, (MAX_QUEUE_SIZE*2));
    int counter = 0;

    while (1) {
        scanf(" %[^\n]", &n);
        parsed_result = parse(n);
        ParsedResult outVal;
        if (getChar(parsed_result) == 'f') {
            printQueue(&fila_resultados);
            break;
        }
        if (getChar(parsed_result) == 'g') {
            in(&fila_geral, parsed_result);
        }
        if (getChar(parsed_result) == 'p') {
            in(&fila_prioridade, parsed_result);
        }
        if (getChar(parsed_result) == 's') {
            if (is_empty(&fila_prioridade) || counter == 3) {
                out(&fila_geral, &outVal);
                in(&fila_resultados, outVal);
                counter = 0;
            } else {
                out(&fila_prioridade, &outVal);
                in(&fila_resultados, outVal);
                counter++;
            }
        }
    }


    return 0;
}
