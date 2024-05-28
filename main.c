//
// Created by Erick Gomes on 21/05/24.
//

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"
#include "parsedResult.h"

int main() {
    char n[255];
    ParsedResult parsed_result;
    t_queue fila_geral, fila_prioridade;
    create(&fila_geral, 20);
    create(&fila_prioridade, 20);
    int counter = 0;

    while (1) {
        scanf(" %[^\n]", &n);
        parsed_result = parse(n);
        ParsedResult outVal;
        if (getChar(parsed_result) == 'f') {
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
                printf("%s\n", getName(outVal));
                counter = 0;
            } else {
                out(&fila_prioridade, &outVal);
                printf("%s\n", getName(outVal));
                counter++;
            }
        }
    }


    return 0;
}
