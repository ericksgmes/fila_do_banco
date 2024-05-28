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

    while (1) {
        scanf(" %[^\n]", &n);
        parsed_result = parse(n);
        if (getChar(parsed_result) == 'f') {
            break;
        }
        if (getChar(parsed_result) == 'g') {
            in(fila_geral);
        }
    }


    return 0;
}
