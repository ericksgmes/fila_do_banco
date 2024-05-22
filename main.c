//
// Created by Erick Gomes on 21/05/24.
//

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

typedef struct {
    char firstChar;
    char remainingStr[255];
} ParsedResult;

ParsedResult parse(const char *input) {
    ParsedResult result;
    sscanf(input, " %c %99[^\n]", &result.firstChar, result.remainingStr);
    return result;
}

int main() {
    t_queue fila;
    int outVal;


    return 0;
}
