//
// Created by Erick Gomes on 28/05/24.
//

#include "parsedResult.h"
#include <stdio.h>
#include <stdlib.h>

ParsedResult parse(const char *input) {
    ParsedResult result;
    result.remainingStr = malloc(1000 * sizeof(char));
    sscanf(input, " %c %99[^\n]", &result.firstChar, result.remainingStr);
    return result;
}

char getChar(ParsedResult parsed_result) {
    return parsed_result.firstChar;
}

char * getName(ParsedResult parsed_result) {
    return parsed_result.remainingStr;
}