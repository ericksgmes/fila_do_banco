//
// Created by Erick Gomes on 28/05/24.
//

#ifndef PARSEDRESULT_H
#define PARSEDRESULT_H

typedef struct {
    char firstChar;
    char *remainingStr;
} ParsedResult;

ParsedResult parse(const char *input);
char getChar(ParsedResult parsed_result);
char * getName(ParsedResult parsed_result);

#endif //PARSEDRESULT_H
