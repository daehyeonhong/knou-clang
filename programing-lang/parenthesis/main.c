#include <stdio.h>
#include <stdlib.h>

int LA = 0;

int nextToken() {
    return getchar();
}

void error(char c) {
    printf("Syntax error near '%c'.\n", c);
    exit(-1);
}

void match(int token) {
    if (LA == token) LA = nextToken();
    else error(token);
}

void L(), S();

void L() {
    if (LA == EOF);
    else {
        S();
        match('\n');
        L();
    }
}

void S() {
    if (LA == EOF) {
        match('(');
        S();
        match(')');
        S();
    } else;
}


int main() {
    LA = nextToken();
    L();
    return 0;
}
