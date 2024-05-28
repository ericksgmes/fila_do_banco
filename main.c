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

char getChar(ParsedResult parsed_result) {
    return parsed_result.firstChar;
}

char * getName(ParsedResult parsed_result) {
    return parsed_result.remainingStr;
}

int main() {

    return 0;
}
