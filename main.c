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

void printChar(ParsedResult parsed_result) {
    printf("%c", parsed_result.firstChar);
}

void printName(ParsedResult parsed_result) {
    printf("%s", parsed_result.remainingStr);
}

int main() {
    ParsedResult parsed_result = parse(" p João manoel ");
    printName(parsed_result);
    printChar(parsed_result);


    return 0;
}
