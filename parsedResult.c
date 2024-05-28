//
// Created by Erick Gomes on 28/05/24.
//

#include "parsedResult.h"
#include <stdio.h>

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